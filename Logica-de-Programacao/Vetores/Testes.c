#include <stdio.h>
#include <conio.h>
//Lista 04 Casa
//Ex02
int main(){
	int i, j, matriz_A[5], matriz_B[5];
	i=0;
	
	printf("Digite os valores da matriz: ");
	
	for(i=0;i<5;++i){
		scanf("%i", &matriz_A[i]);
	}
	
	i=0;
	for(i=0; i<5; i++){
		int fat=1;
		for(j=1;j<=matriz_A[i]; ++j){
			fat = fat*j;
		}
	
	printf("Valor matriz_B[%i]: ", i);	
	matriz_B[i]=fat;
	
	printf("%i\n", matriz_B[i]);
	}
	
}

