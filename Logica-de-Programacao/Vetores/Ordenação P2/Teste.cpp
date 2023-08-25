#include <stdio.h>
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



