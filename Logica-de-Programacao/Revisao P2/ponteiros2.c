#include <stdio.h>
#include <conio.h>

int soma(int x){
	x = x + 100;
}

int refsoma(int *x){
	*x = *x + 100;
}

int main(){
	int x = 10;
	int *px;
	px = &x;
	
//	printf("%d", px);
//	printf("\n");
//	printf("%d", *px);
	
	soma(x);
	printf("%d", x);
	
	printf("\n");
	
	refsoma(px);
	printf("%d", x);
	////ANALOGO///
	refsoma(&x);
	printf("\n%d", x);
}
