#include <stdio.h>
//Ex01 Lista 6
int main(){
	int A[5][3], B[5][3], C[5][3];
	int i, j = 0;
	for (i=0;i<5;++i){
		for(j=0;j<3;++j){
			printf("Valor de A: ");
			scanf(" %d", &A[i][j]);
			printf("Valor de B: ");
			scanf(" %d", &B[i][j]);
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	
	for(i=0; i<5; ++i){
		for(j=0; j<3; ++j){
			printf("\nC[%d][%d] = %d", i, j, C[i][j]);	
		}
	}	
}

//Ex02 Lista 6
int main(){
	int A[7], B[7], C[7][2];
	int i, j = 0;
	for (i=0;i<7;++i){
		printf("Valor de A: ");
		scanf(" %d", &A[i]);
		printf("Valor de B: ");
		scanf(" %d", &B[i]);		
	}
	
	for(i=0;i<7;++i){
		for(j=0;j<2;++j){		
			C[i][j] = A[i];
			if(j==1){
				C[i][j] = B[i];	
			}
		}
	}
	
	for(i=0; i<7; ++i){
		for(j=0; j<2; ++j){
			printf("\nC[%d][%d] = %d", i, j, C[i][j]);	
		}
	}	
}


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


//Ex04 Lista06
int main(){
	int A[4], B[4], C[4][2];
	int i, j, f = 0;
	
	for (i=0;i<4;++i){
		printf("Valor de A: ");
		scanf(" %d", &A[i]);
		printf("Valor de B: ");
		scanf(" %d", &B[i]);
		
		for(j=0; j<2; ++j){
			C[i][j] = A[i]*2;
			
			if(j==1){
				C[i][j] = B[i]-5;
			}
		}
	
	}
	
	for(i=0; i<4; ++i){
		for(j=0; j<2; ++j){
			printf("\nC[%d][%d] = %d", i, j, C[i][j]);	
		}
	}	
}
