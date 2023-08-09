#include <stdio.h>
#include <conio.h>
#include <string.h>

int i, j;
void leitura(char vetor[20][3]){
	for(i=0;i<3;++i){
		printf("Digite o %d nome: ", i+1);
		fflush(stdin);scanf("[\n]", &vetor);	
	}
}

void exibir(char vetor[20][3]){
	for(i=0;i<20;++i){
		for(j=0;j<3;++j){
			printf("%s", vetor[i][j]);	
		}	
	}
}

void main(){
	char nomes[20][3];
//	leitura(nomes);
	
	
	char *mes[]={"Ola", "Bom dia"};
	for(i=0;i<3;++i){
		printf("%s", mes[i]);
	}
	
//	exibir(nomes);	
}
