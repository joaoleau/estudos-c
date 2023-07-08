#include <stdio.h>
#include <conio.h>

int valor = 3;
int i;


int soma(int a){
	a = a + 4;	
}

int soma_ponteiro(int *a){
	*a = *a + 4;	
}

int vetor(int *vetor){
	for (i=0;i<5;++i){
		vetor[i] += 10;
	}
}

void main(){
	int *p;
	p = &valor;	
	
	printf("%d", valor);//3
	soma(valor);
	printf("\n%d", valor);//3
	
	soma_ponteiro(&valor);
	printf("\n%d", valor);
	
	soma_ponteiro(p);
	printf("\n%d", *p); //7
	
	*p = 10;
	printf("\n%d", *p);
	
	//////////////////////////////////
	printf("\nVETOR");
	//Vetor ja é um ponteiro
	int nums[] = {1,2,3,4,5};
	vetor(nums);
	
	for(i=0;i<5;++i){
		printf("\n%d", nums[i]);
	}
	
}
