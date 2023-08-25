#include <stdio.h>
#include <conio.h>
//Lista 04 Sala
//Ex01
int main(){
	
	int vetorA[5]={};
	int vetorB[5];
	
	printf("Digite os 5 valores do vetor: ");
	
	for(int i=0;i<5;++i){
		scanf("%i", &vetorA[i]);
	}
	
	for(int i=0;i<5;++i){
		vetorB[i]=vetorA[i]*3;
		printf("%i\n", vetorB[i]);
	}
	
	return 0;
}

//Ex02



//Ex03
int main(){
	int A[5];
	int B[5];
	int C[5];
	int i;	
	
	printf("Digite os valores do vetor A:");
	for(i=0;i<5;++i){
		scanf("%i", &A[i]);
	}
	
	printf("Digite os valores do vetor B:");
	for(i=0;i<5;++i){
		scanf("%i", &B[i]);
	}	
	
	for(i=0;i<5;++i){
		C[i]=A[i]-B[i];
		printf("C[%i]:%i\n",i,C[i]);
	}
}

//Ex 04
int main(){
	int A[5]={};
	int B[5]={};
	int C[10]={};
	int i;	
	
	printf("Digite os valores do vetor A:");
	for(i=0;i<5;++i){
		scanf("%i", &A[i]);
	}
	
	printf("Digite os valores do vetor B:");
	for(i=0;i<5;++i){
		scanf("%i", &B[i]);
	}	
	
	for(i=0;i<5;++i){
		C[i]=A[i];
		C[i+5]=B[i];
}

	for(i=0;i<10;++i){
		printf("C[%i]:%i\n",i,C[i]);
	}
}

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

//Ex06
int main(){
	int A[8];
	int B[8];
	int i;	
	
	for(i=0;i<8;++i){
		A[i]=i;
	}
	
	for(i=0;i<8;++i){
		B[i]=A[i]*A[i];
		printf("B[%i]:%i\n",i,B[i]);
	}	

}

//EX07
int main(){
	int A[10];
	int B[10];
	int i;	
	
	for(i=0;i<10;++i){
		A[i]=i;
	}
	
	for(i=0;i<10;++i){
		B[i]=A[9-i];
		printf("B[%i]:%i\n",i,B[i]);
	}	

}

//EX08
int main(){
	int n;
	char mes[12][10]={"Janeiro", "Fevereiro","Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro","Dezembro"};	
	
	printf("Digite o numero do mes:");
	
	scanf(" %i", &n);
	
	switch (n){
	case 1:
		printf("%s", mes[n-1]);
		break;
	case 2:
		printf("%s", mes[n-1]);
		break;
	case 3:
		printf("%s", mes[n-1]);
		break;
	case 4:
		printf("%s", mes[n-1]);
		break;	
	case 5:
		printf("%s", mes[n-1]);
		break;
	case 6:
		printf("%s", mes[n-1]);
		break;
	case 7:
		printf("%s", mes[n-1]);
		break;
	case 8:
		printf("%s", mes[n-1]);
		break;
	case 9:
		printf("%s", mes[n-1]);
		break;
	case 10:
		printf("%s", mes[n-1]);
		break;
	case 11:
		printf("%s", mes[n-1]);
		break;
	case 12:
		printf("%s", mes[n-1]);
		break;
	}	

}

//Ex09
int main(){
	int n;
	char mes[5][38]={"Engenharia", "Edificações","Sistemas Eletricos", "Turismo", "Analise e Desenvolvimento de Sistemas"};	
	
	printf("Digite o numero do mes:");
	
	scanf(" %i", &n);
	
	switch (n){
	case 1:
		printf("%s", mes[n-1]);
		break;
	case 2:
		printf("%s", mes[n-1]);
		break;
	case 3:
		printf("%s", mes[n-1]);
		break;
	case 4:
		printf("%s", mes[n-1]);
		break;	
	case 5:
		printf("%s", mes[n-1]);
		break;
	}	

}


//Lista 04 Casa
//Ex01
int main(){
	int i;
//	char rac[9][2]={"y1", "y2", "y3", "y4", "y5", "y6", "y7", "y8", "y9"};
//	char rav[9][2]={"x1", "x2", "x3", "x4", "x5", "x6", "x7", "x8", "x9"};

	char rav[9];
	char rac[9];
	
	for(i=0;i<9;++i){
		printf("Digite o %d valor do RAV:\n",i+1);
		scanf(" %c", &rav[i]);
		//printf("ra[%i]:%i\n",i,ra[i]);
	}
	
	rac[0]=rav[0];
	rac[1]=rav[1];
	rac[2]=rav[7];
	rac[3]=rav[6];
	rac[4]=rav[4];
	rac[5]=rav[5];
	rac[6]=rav[2];
	rac[7]=rav[3];
	rac[8]=rav[8];

	printf("O valor do RA sera:");	
	for(i=0;i<9;++i){
		printf("%c",rac[i]);
	}
	
}



//Ex02
int main(){
	int i;
	char ra[9];
	char ran[9];
		
	for(i=0;i<9;++i){
		printf("Digite o %d valor do RA:\n",i+1);
		scanf(" %c", &ra[i]);
		//printf("ra[%i]:%i\n",i,ra[i]);
	}
	
	for(i=0;i<6;++i){
		ran[i]=ra[i];
	}
	
	for(i=0;i<4;++i){
		ran[i+5]=ra[8-i];
	}
	//ran[5]=ra[8];
	//ran[6]=ra[7];
	//ran[7]=ra[6];
	//ran[8]=ra[5];
	
	printf("Novo RA:");
	for(i=0;i<9;++i){
		printf("%c",ran[i]);
	}
}

//Ex03
int main(){
	int i;
	char ra[9];
	char ran[9];
		
	for(i=0;i<9;++i){
		printf("Digite o %d valor do RA:\n",i+1);
		scanf(" %c", &ra[i]);
		//printf("ra[%i]:%i\n",i,ra[i]);
	}
	
	for(i=0;i<7;++i){
		ran[i]=ra[i];
	}
	
	ran[7]=ra[8];
	ran[8]=ra[7];
	
	ran[1]=ra[0];
	ran[0]=ra[1];
	
	printf("Novo RA:");
	for(i=0;i<9;++i){
		printf("%c",ran[i]);
	}
}
