#include <stdio.h>
#include <conio.h>
//Lista 04 Sala
//Ex01
int main(){
	
	int vetorA[5]={};
	int vetorB[5];
	
	printf("Digite os 5 valores do vetor: ");
	
	for(int i=0;i<5;++i){
		scanf("%i", &vetorA[i]);
	}
	
	for(int i=0;i<5;++i){
		vetorB[i]=vetorA[i]*3;
		printf("%i\n", vetorB[i]);
	}
	
	return 0;
}
