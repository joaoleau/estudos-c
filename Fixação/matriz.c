#include <stdio.h>
#include <conio.h>
#define TAMANHO 2
int i,j;
int A[3] = {1,2,3};
int B[3][2];
int nums[TAMANHO] = {6,7};

void exibir(int a[3][2]){
	for(i=0;i<3;++i){
		for(j=0;j<2;++j){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}


void exibir1(int a[]){
	for(i=0;i<TAMANHO;++i){
		printf("%d ", a[i]);
	}
}

void att(int a[], int b[3][2]){
	for(i=0;i<3;++i){
		for(j=0;j<2;++j){
			b[i][j] = a[i];
			if(j==1){
				b[i][j] = a[i]*5;	
			}
		}
	}
}

void ord(int b[3][2]){
	int ord[3];
	for(i=0;i<3;++i){
		for(j=0;j<2;++j){
			if(j==1){
				ord[i] = b[i][j];	
			}
		}
	}
	int maior;
	for(i=0;i<3;++i){
		for(j=i+1;j<3;++j){
			if(ord[i]<=ord[j]){ //Decrescente (<=)
				maior = ord[i];
				ord[i] = ord[j];
				ord[j] = maior;
			}	
		}
		b[i][1] = ord[i];
	}
//	for(i=0;i<3;++i){
//		b[i][1] = ord[i];	
//	}
}

void crescente(int nums[TAMANHO]){
	int maior;
	for(i=0;i<TAMANHO;++i){
		for(j=i+1; j<TAMANHO; ++j){
			if(nums[i]>=nums[j]){
				maior = nums[i];
				nums[i] = nums[j];
				nums[j] = maior;
			}
		}
	}
}


void main(){
	att(A,B);
	exibir(B);
	printf("\n");
	ord(B);
	exibir(B);
	printf("//////////////////////////\n");
	crescente(nums);
	exibir1(nums);
	
	
	
}
