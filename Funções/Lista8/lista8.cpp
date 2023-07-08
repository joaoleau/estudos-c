#include <stdio.h>
//Exercicio 2 - A
int soma(int valor){
	int i, somador = 0;
	for(i=0;i<=valor;++i){
		somador = somador + i;
	}	
	printf("%d", somador);
	}

int main(){
	int value;
	printf("Digite valor: ");
	scanf("%d", &value);
	soma(value);
}


//Exercicio 2 - B
int vetorA[3], vetorB[3], vetorC[6], i;

void ler(){
	for (i=0;i<3;++i){
		printf("vetorA: ");
		scanf("%d", &vetorA[i]);
		
		printf("vetorB: ");
		scanf("%d", &vetorB[i]);
	}
}

void juntar(int vetor1[], int vetor2[]){
	for (i=0;i<3;++i){
		vetorC[i] = vetor1[i];
		vetorC[i+3] = vetor2[i];
	}
}

int exibir(int vetor[], int tamanho){
	for (i=0;i<tamanho;++i){
		printf("%d ", vetor[i]);
	}	
}

int main(){
	ler();
	juntar(vetorA, vetorB);
	printf("Vetor C: ");
	exibir(vetorC, 6);	
}


//Exercicio 2 - C
float prestacao(float valor, float taxa, int tempo){
	float prestacao;
	prestacao = valor + (valor * (taxa/100) * tempo);
	return (prestacao);
}

int main(){
	// prestacao(valor, taxa, tempo)
	printf("R$ %.2f", prestacao(1000,10, 1));
}


//Exercicio 2 - D
int potencia(int valor, int expoente){
	int potencia, i;
	potencia = valor;
	
	if (expoente != 0){
		for (i=1;i<expoente;++i){
			potencia *= valor;
		}
		
	}else{potencia = 1;}
	
	return (potencia);
}

int main(){
	// potencia(valor, expoente)
	printf("%d", potencia(2,0));
}


//Exercicio 2 - E
int i, j, vetorA[12], vetorB[12], vetorC[2];
void crescente(int vetor[]){
	int maior;
	for (i=0;i<12;++i){
		for (j=i; j<12; ++j){
			if(vetor[i]>vetor[j]){
				maior = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = maior;
			}
		}
	}
}

void exibir(int vetor[]){
	for (i=0; i<12; ++i){
		printf("%d ", vetor[i]);	
	}
}

int ler(){
	for (i=0;i<12;++i){
		printf("vetorA: ");
		scanf("%d", &vetorA[i]);
		
		printf("vetorB: ");
		scanf("%d", &vetorB[i]);
	}
}


int juntar(int vetor1[], int vetor2[]){
	for (i=0; i<12; ++i){
		vetorC[i] = vetor1[i] + vetor2[i];
	}
	printf("VetorC Criado\n");
}

int main(){
	ler();
	crescente(vetorA);
	crescente(vetorB);
	juntar(vetorA, vetorB);
	crescente(vetorC);
	exibir(vetorC);
}


//Exercicio 2 - F
int fibonacci(int n_termo){
	int a, next = 0;
	int b = 1;
	for (int i = 0; i < n_termo; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;			
        b = next;
    }
}

int main(){
	fibonacci(10);
}

//Exercicio 3 - a
int i;
int soma(int *num){ //Declarando que o parametro sera um ponteiro
	int soma;
	for(i=0;i<=*num;++i){
	soma +=i;
	}
	return soma;
}


int main(){
	int *n; //Declarando ponteiro
	int valor; //Declarando um var que sera apontada
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
	n = &valor; //ponteiro n pegando o valor do endereço de memoria valor
	printf("%d", soma(n)); //Passando o valor que esta no endereço de mem valor 'n' como parametro da funao soma
}


// Exercicio 3 - b
int vetorA[3], vetorB[3], vetorC[6], i;
void ler(){
	for (i=0;i<3;++i){
		printf("vetorA: ");
		scanf("%d", &vetorA[i]);
		
		printf("vetorB: ");
		scanf("%d", &vetorB[i]);
	}
}

void juntar(int *vetor1, int *vetor2){
	for (i=0;i<3;++i){
		vetorC[i] = vetor1[i];
		vetorC[i+3] = vetor2[i];
	}
}

int exibir(int *vetor, int tamanho){
	for (i=0;i<tamanho;++i){
		printf("%d ", vetor[i]);
	}	
}

int main(){
	ler();
	juntar(vetorA, vetorB);
	printf("Vetor C: ");
	exibir(vetorC, 6);	
}

//Exercicio 3 - c
float prestacao(float *valor, float *taxa, int *tempo){
	float prestacao;
	prestacao = *valor + (*valor * (*taxa/100) * *tempo);
	return (prestacao);
}

int main(){
	float *p_valor, *p_taxa, valor, taxa;
	int *p_tempo, tempo;
	
	printf("Valor: ");
	scanf("%f", &valor);
	
	printf("Taxa: ");
	scanf("%f", &taxa);
	
	printf("Tempo: ");
	scanf("%d", &tempo);
	
	p_valor = &valor;
	p_taxa = &taxa;
	p_tempo = &tempo;
	
	// prestacao(valor, taxa, tempo)
	printf("R$ %.2f", prestacao(p_valor,p_taxa, p_tempo));
}

// Exercicio 3 - d
int i;
int potencia(int *base, int *expoente){
	int resultado;
	resultado = pow(*base, *expoente);
	return resultado;
}

int main(){
	int *base, *expoente;
	int num_expoente, num_base;
	printf("Digite a base: ");
	scanf("%d", &num_base);
	printf("Digite o expoente: ");
	scanf("%d", &num_expoente);	
	base = &num_base;
	expoente = &num_expoente;	
	printf("%d", potencia(base, expoente));
}



//Exercicio 3 - e
int i, j;
int vetorB[12], vetorA[12], vetorC[12];
int tamanho = 12;
int crescente(int *vetor, int tamanho){
	int maior;
	for(i=0;i<tamanho;++i){
		for(j=i;j<tamanho;++j){
			if (vetor[i] >= vetor[j]){
				maior = vetor[i];
				vetor[i] = vetor [j];
				vetor[j] = maior;
			}
		}
	}
	
	
}
void leitura(int *vetor){
	for(i=0;i<tamanho; ++i){
		printf("Valor %dº do vetor: ", i);
		scanf("%d", &vetor[i]);
	}
}
void juntar(int *vetorA, int *vetorB){
	for (i=0; i<tamanho; ++i){
		vetorC[i] = vetorA[i] + vetorB[i];
	}
}
int main(){
	leitura(vetorA);
	leitura(vetorB);
	crescente(vetorA, tamanho);
	crescente(vetorB, tamanho);
	juntar(vetorA, vetorB);
	printf("Vetor C: ");
	for (i=0; i<tamanho; ++i){
		printf("%d ", vetorC[i]);
	}
}


