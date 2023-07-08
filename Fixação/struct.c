#include <stdio.h>
#include <string.h>
#include <conio.h>

int i,j;
int contador = 0;


struct aluno{
	char nome[80];
	int idade;
};
struct aluno a[2];

void cadastro(struct aluno *a){
	if (contador<2){
		printf("Digite o nome: ");
		fflush(stdin); scanf("%[^\n]", &a[contador].nome);
		
		printf("Digite a idade: ");
		fflush(stdin); scanf("%d", &a[contador].idade);
		
		contador++;
	}
	else{
		printf("Não tem mais espaco p registros");
	}
}


void pesq(struct aluno *a){
	int idade;
	int acha =0;
	printf("Digite a idade a ser pesquisada: ");
	scanf("%d", &idade);
	i=0;
	while(acha==0 && i<contador){
		if((a[i].idade - idade) == 0){
			acha=1;
		}
		else{
			++i;
		}
	}
	
	if(acha==1){
		printf("Corresponde a %s", a[i].nome);
		
	}else{
		printf("Nao tem");
	}
}

void main(){
	cadastro(&a);
	cadastro(&a);
	pesq(&a);
}

