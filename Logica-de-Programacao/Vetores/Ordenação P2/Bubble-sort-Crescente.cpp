#include <stdio.h>

//Crescente
int main(){
	//              0  1  2  3  4
	int vetor[5] = {5, 4, 3, 2, 1};

	int i, j, maior;
	for(i=0; i<5; ++i){ 
	printf("\nI:%d\n",i);                //Exemplo vetor[]={1,5,4,2,3}
	printf("------------\n");            //i=0 {1,5,4,2,3}
		for(j=i; j<5; ++j){              //i=1 {1,4,5,2,3}, {1,4,2,5,3}, {1,4,2,3,5}
			printf("J:%d\n", j);
			if(vetor[i] > vetor[j]){     //i=2 {1,2,4,3,5}, {1,2,3,4,5}
				maior = vetor[i];        //i=3 Não arruma nada
				vetor[i] = vetor[j];     //i=4 Não arruma nada
				vetor[j] = maior;        
			}                            
		}
	}
	
	for(i=0; i<5; ++i){
		printf("%d", vetor[i]);
	}

}


