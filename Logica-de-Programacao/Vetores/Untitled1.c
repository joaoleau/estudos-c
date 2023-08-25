#include <stdio.h>
#include <conio.h>

int main(){
	int i;
	int vetor[5]={10,20,30,40,50};
	
	for(i = 0; i<5 ; ++i){
		printf("%i\n", vetor[i]);
	}
	
	printf("Tamanho em bits: %d\n",sizeof(vetor));; //Sizeof mostra o tamanho em bits doq aquilo ocupa
	
	size_t tamanho= sizeof(vetor)/sizeof(vetor[0]); //Cada dado no array vale 4bits
	
	printf("Tamanho do array: %d", tamanho);
	
	return 0;
}
