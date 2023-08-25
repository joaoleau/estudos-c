#include <stdio.h>

//Pesquisa
int main(){
	int vetor[5] = {1, 2, 3, 4, 5};
	
	int pesq;
	printf("Digite o valor a ser procurado: ");
	scanf("%d", &pesq);
	
	int acha, i = 0;
	while(acha == 0 && i<5){
		if(pesq == vetor[i]){
			acha = 1;
		}
		else{
			//printf("Nao achou\n");
			++i;
		}
	}
	
	if(acha == 1){
		printf("Tem o valor");
	}else{
		printf("Nao tem o valor");
	}

}


