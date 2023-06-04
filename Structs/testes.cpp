#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char jorge[80];
	char joao[80];
	
	fflush(stdin);fgets(jorge,80,stdin);
	fflush(stdin);fgets(joao,80,stdin);
	
	
	//char cmp = strcmp(joao,jorge);

	if (strcmp(joao,jorge) == 0){
		printf("Igual");
	}
	else{
		printf("Diferente");
	}
}
