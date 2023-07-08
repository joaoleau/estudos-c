#include <stdio.h>
#include <conio.h>
int i,j;

void exibir(int vetor[3][2]){
	printf("MATRIZ\n");
	for(i=0;i<3;++i){
		for(j=0;j<2;++j){
			printf("%d ", vetor[i][j]);
		}
		printf("\n");
	}
} 

void leitura(int vetor[3][2]){
	printf("Valor do Vetor: ");
	for(i=0;i<3;++i){
		for(j=0;j<2;++j){
			scanf("%d", &vetor[i][j]);
		}
	}
}

void main(){					
	int vetor[3][2];
	leitura(vetor);
	exibir(vetor);
	
}    

   
