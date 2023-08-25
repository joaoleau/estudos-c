#include <stdio.h>

//Ex 01 - Lista 05
int main(){
	int vetor[12];
	int i, j, menor = 0;

	//Inserindo valores no vetor
	for (i=0; i<12; ++i){
		vetor[i] = i;
	}
		
	//Ordenando
	for(i=0; i<12; ++i){
		for(j=i; j<12; ++j){
			if(vetor[i]<vetor[j]){
				menor = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = menor;
			}
		}
	}
	
	//Mostrando vetor ordenado
		for(i=0; i<12; ++i){
		printf("%d\n", vetor[i]);
	}

}



//Ex 02 - Lista 05
int main(){
	int vetorA[12], vetorB[12];
	int i, j = 0;
	
	for (i=0;i<12;++i){
		vetorA[i] = i;	
	}
	
	for (i=0; i<12; ++i){
		vetorB[i] = vetorA[i] * 5;
	}
	
	int maior = 0;
	//Ordenação Crescente
	for (i=0; i<12; ++i){
		for (j=i; j<12; ++j){
			if(vetorB[i]>vetorB[j]){
				maior = vetorB[i];
				vetorB[i] = vetorB[j];
				vetorB[j] = maior;
			}
		}
	}	
	printf("Vetor B: ");
	//Exibindo vetorB Crescente
	for (i=0; i<12; ++i){
		printf("%d ", vetorB[i]);
	}
	
	char resp = 'n';
	while (resp != 's'){
		//Pesquisa
		int pesq;
		printf("\nDigite o valor a ser pesquisado: ");
		scanf(" %d", &pesq);
		
		int acha = 0;
		i = 0;
		while(i<12 && acha == 0){
			if (pesq == vetorB[i]){
				acha = 1;
			}else{
				++i;
			}
		}
		
		if (acha==1){
			printf("\nO valor %d pertence ao Vetor B\n", pesq);
		}else{
			printf("\nO valor %d nao pertence ao Vetor B\n", pesq);
		}
		
		printf("\nVoce deseja sair do programa? (s/n) ");
		scanf(" %c", &resp);
		
	}
}

//Ex 03 - Lista 05
int main(){
	int vetorA[15], vetorB[15];
	int i, j, maior = 0;
	for (i=0; i<15; ++i){
		vetorA[i] = i;
	}
		
	for(i=0; i<15; ++i){
		int fat = 1;
		for(j=1; j<=vetorA[i]; ++j){
			fat *= j;	
		}
		vetorB[i] = fat;
	}
	
	//Ordenando Crescente B
	for(i=0; i<15; ++i){
		for(j=i; j<15; ++j){
			if(vetorB[i]>vetorB[j]){
				maior = vetorB[i];
				vetorB[i] = vetorB[j];
				vetorB[j] =  maior;
			}	
		}
	}
	
	for(i=0; i<15; ++i){
		printf("%d\n", vetorB[i]);
 }	
}


//Ex 04 - Lista 05
int main(){ //Ex 04 - Lista 05
	int i, j, maior, vetorC[12];
	i=0;
	int vetorA[12]={1, 3, 4, 7, 5, 10, 23, 8, 11, 15, 2, 13};
	int vetorB[12]={4, 33, 12, 11, 3, 7, 6, 9, 10, 15, 13, 7};
	//Ordenando A - Crescente
	for(i=0;i<12;++i){
		for(j=i;j<12;++j){
			if(vetorA[i]>vetorA[j]){
				maior = vetorA[i];
				vetorA[i] = vetorA[j];
				vetorA[j] = maior;
			}
		}
	}
	//Ordenando B - Crescente
	for(i=0; i<12; ++i){
		for(j=i;j<12;++j){
			if(vetorB[i]>vetorB[j]){
				maior = vetorB[i];
				vetorB[i] = vetorB[j];
				vetorB[j] = maior;
			}
		}
	}
	//Exibindo A e B ordenado
	printf("Vetor A ");
	for(i=0; i<12; ++i){
		printf("%d ", vetorA[i]);
	}
	printf("\nVetor B ");
	for(i=0; i<12; ++i){
		printf("%d ", vetorB[i]);
	}
	//C
	for(i=0; i<12; ++i){
		vetorC[i] = vetorA[i] + vetorB[i];
	}
	for(i=0; i<12; ++i){
		for(j=i; j<12; ++j){
			if(vetorC[i]>vetorC[j]){
				maior = vetorC[i];
				vetorC[i] = vetorC[j];
				vetorC[j] = maior;
			}
		}
	}
	//Exibindo C
	printf("\nVetor C ");
	for(i=0; i<12; ++i){
		printf("%d ", vetorC[i]);
	}		
}


//Ex 05 - Lista 05
int main(){
	int vetorA[20], vetorB[30], vetorC[50], i, j, menor;
	i=0;
	
	//Valores A
	printf("\nVetor A ");
	for(i=0; i<20; ++i){
		vetorA[i] = i*2;
		printf("%d ", vetorA[i]);
	}
	
	//Valores B
	printf("\nVetor B ");
	for(i=0; i<30; ++i){
		vetorB[i] = i*2+1;
		printf("%d ", vetorB[i]);
	}
	
	//Atribuindo valores de A e B para C
	for(i=0; i<50; ++i){
		if(i>19){	
			vetorC[i]=vetorB[i];
		}
		vetorC[i]=vetorA[i];
	}
	
	//Exibindo C
	printf("\nVetor C ");
	for(i=0; i<50; ++i){
		printf("%d ", vetorC[i]);
	}
	
	printf("\n \n \n");
	
	//Ordenanco C - Decrescente
	for(i=0; i<50; ++i){
		for(j=i;j<50;++j){
			if(vetorC[i]<vetorC[j]){
				menor = vetorC[i];
				vetorC[i] = vetorC[j];
				vetorC[j] = menor;
			}
		}
	}
	
	//Exibindo C
	printf("\nVetor C ");
	for(i=0; i<50; ++i){
		printf("%d ", vetorC[i]);
	}	
}


//Ex 06 - Lista 05
int main(){
	int vetorA[30], vetorB[30], i;

	i=0;
	//Valores A
	printf("\nVetor A ");
	for(i=0; i<30; ++i){
		vetorA[i] = i;
		printf("%d ", vetorA[i]);
	}
	
	//Valores B
	printf("\nVetor B ");
	for(i=0; i<30; ++i){
		vetorB[i] = vetorA[i]*vetorA[i]*vetorA[i];
		printf("%d ", vetorB[i]);
	}
	
	
	char resp;
	while(resp!='s'){
		//Pesquisa
		int pesq;
		printf("Digite o valor a ser pesquisado");
		scanf(" %d", &pesq);
		
		//Pesquisando
		int acha = 0;
		i = 0;	
		while(acha==0 && i<30){
			if(pesq==vetorB[i]){
				acha=1;
			}
			else{
				++i;
			}		
		}
		
		//Resposta da pesquisa
		if(acha==1){
			printf("\nPertence");
		}else{
			printf("\nNao pertence");
		}
		
		//Pergunta para sair do programa
		printf("\nDeseja sair da pesquisa? (s/n)");
		scanf(" %c", &resp);
	}
		
}


//Ex 07 - Lista 05
int main(){
	int vetorA[20], vetorB[20], i;
	
	i=0;
	//Atribuindo valores A
	for(i=0; i<20; ++i){
		vetorA[i] = i;
	}
	
	//Atribuindo valores B
	for(i=0; i<20; ++i){
		vetorB[i] = vetorA[i]+2;
	}

	//Ordenanco B - Crescente
	int j, maior;
	for(i=0; i<20; ++i){
		for(j=i; j<20; ++j){
			if(vetorB[i]>vetorB[j]){
				maior = vetorB[i];
				vetorB[i] = vetorB[j];
				vetorB[j] = maior;
			}
		}
		
		printf("%d ", vetorB[i]);
	}
	
	char resp;
	while(resp!='s'){
		
		int pesq = 0;
		printf("\nDigite o valor a ser pesquisado: ");
		scanf(" %d", &pesq);
		
		int acha = 0;
		i = 0;
		while(i<20 && acha == 0){
			if(pesq==vetorB[i]){
				acha = 1;
			}
			++i;
		}
		
		if(acha==1){
			printf("%d Pertence ao Vetor B", pesq);
		}else{
			printf("%d Nao pertence ao Vetor B", pesq);
		}
		
		printf("\nDeseja sair do programa? (s/n)");
		scanf(" %c", &resp);
		
	}

}


//Ex 08 - Lista 05
int main(){
	int notas[40], i;
	
	//Dando valores para o vetor notas
	i = 0;
	for(i=0; i<40; ++i){
		notas[i] = i;
		if(i>10){
			notas[i] = i - 10;
		}
		if(i>20){
			notas[i] = i - 20;
		}
		if(i>30){
			notas[i] = i - 30;
		}
	}
	
	//Ordenando Notas
	int maior, j = 0;
	for(i=0;i<40;++i){
		for(j=i; j<40; ++j){
			if(notas[i]>notas[j]){
				maior = notas[i];
				notas[i] = notas[j];
				notas[j] = maior;
			}
		}
	}
	
	char resp = 'n';
	while(resp!='s'){
		
		int pesq;
		printf("Digite o valor a ser pesquisado: ");
		scanf(" %d", &pesq);
		
		int acha = 0;
		i = 0;
		while(acha==0 && i<40){
			if(pesq==notas[i]){
				acha =1;
			}
			++i;
		}
		
		if(acha==1){
			printf("Existe a nota %d", pesq);
		}else{
			printf("Essa nota nao pertence a nenhum aluno");
		}
		
		printf("\nDeseja sair do programa? (s/n) ");
		scanf(" %c", &resp);
	}


}
