#include <conio.h>
#include <stdio.h>

void somador(int p, int *soma){
	int i;
	for(i=0;i<p;++i){
		*soma += i;
	}
}


void main(){
	int n;
	int soma = 0;
	printf("Digite N: ");
	scanf("%d", &n);
	
	somador(n, &soma);
	
	printf("%d", soma);
}
