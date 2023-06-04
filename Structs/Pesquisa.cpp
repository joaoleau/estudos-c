#include<stdio.h>
#include<conio.h>

int main(){
	struct dados{
		int d_codigo;
		char d_cargo;
		float d_sal;
	};
	struct dados X[2];
	
	int i;
	for(i=0;i<=1;++i){
		printf("Entre com o codigo:");
		fflush(stdin);scanf("%d", &X[i].d_codigo);
		printf("Entre com o cargo:");
		fflush(stdin);scanf("%s", &X[i].d_cargo);
		printf("Entre com o salario:");
		fflush(stdin);scanf("%f", &X[i].d_sal);
	}
	
	int cod, acha;
	printf("Qual o codigo:");
	fflush(stdin);scanf("%d", &cod);
	
	i=0, acha=0;
	while (i<=1 && acha==0){
		if (X[i].d_codigo == cod){
			acha = 1;
		}
		
		else{
			++i;
		}
		 
		if (acha ==1){
			printf("O codigo foi localizado na posicao%d ", X[i].d_codigo);
		}	
	}
}
