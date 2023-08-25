#include <stdio.h>
#include <conio.h>
//Lista 04 Sala
//Ex05
int main(){
	int A[30]={};
	int B[20]={};
	int C[50]={};
	int i;	
	
	for(i=0;i<30;++i){
		A[i]=i;
	}
	
	for(i=0;i<20;++i){
		B[i]=i;
	}	
	
	for(i=0;i<30;++i){
		C[i]=A[i];
		C[i+30]=B[i];
	}

	for(i=0;i<50;++i){
		printf("C[%i]:%i\n",i,C[i]);
	}
}
