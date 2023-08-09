#include <stdio.h>
//Ex03 Lista 06
int main(){
	int A[10], B[10][3];
	int i, j, f = 0;
	
	for (i=0;i<10;++i){
		printf("Valor de A: ");
		scanf(" %d", &A[i]);
		
		for(j=0; j<3; ++j){
			B[i][j] = A[i]+5;
			
			if(j==1){
				int fat = 1;
				for(f=1; f<=A[i]; ++f){
					fat *= f;
					B[i][j] = fat;
					
				}
			}
			if(j==2){
				B[i][j] = A[i]*A[i];
			}
		}
	}
	for(i=0; i<10; ++i){
		for(j=0; j<3; ++j){
			printf("\nB[%d][%d] = %d", i, j, B[i][j]);	
		}
	}	
}
