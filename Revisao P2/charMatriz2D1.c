#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TAMANHO 3 
char nomes[TAMANHO][20];
int i;

void print(char vetor[TAMANHO]){
	for(i=0;i<TAMANHO;++i){
		printf("%s", vetor[i]);
		printf("%[\n]", vetor[i]);	
	}
}


void read(char vetor[TAMANHO]){
	fflush(stdin);
	for(i=0;i<TAMANHO;++i){
		printf("Digite o %d nome: ", i+1);
		fflush(stdin);fgets(vetor[i], 20, stdin);	
	}
}


void edit(char vetor[TAMANHO]){
	int id;
	printf("Indice a ser mudade: ");
	fflush(stdin); scanf("%d", &id);
	
	for (i=0;i<TAMANHO;++i){
		if(id == i){
			return;	
		}	
		else{printf("Não possui esse indice");
		}
	}
	
	int acha = 0;
	i = 0;
	
	printf("Digite o novo valor: ");
	fflush(stdin);fgets(vetor[id], 20, stdin);
	
	
//	while (i<TAMANHO || acha==0){
//		for(i=0;i<TAMANHO;++i){
//			if (id == i){
//				acha = 1;
//			}
//			else{
//				++i;
//			}
//		}
//	
//		if (acha==1){
//			printf()
//		}
//	}
	
	
}




void main(){
	//read(nomes);
	fflush(stdin);fgets(nomes[0], 20, stdin);
	fflush(stdin);fgets(nomes[1], 20, stdin);
	fflush(stdin);fgets(nomes[2], 20, stdin);
	
	print(nomes);
	
}
