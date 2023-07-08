//Exercicio 1-b
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int i = 0;
int j;
int contador = 0;

struct alunos{
	char nome[80];
	int notas[2];
};
struct alunos c[20];

void cadastro(){
	if(contador < 20){
		printf("Digite o nome: ");
		fflush(stdin); 
		scanf("%[^\n]", &c[contador].nome);
		
		for(i=0;i<2;++i){
			printf("Digite a %d nota: ", i+1);
			fflush(stdin); scanf("%d", &c[contador].notas[i]);
		}
		
		++contador;
	}else{
		printf("\nSem espaco para novos registros");
	}
}

int media(struct alunos c){
	int soma, media;
	for(i=0;i<2;++i){
		soma = soma + c.notas[i];
	}
	media = soma/2;
	return media;
}

void pesquisa_nome(){
	char pesq_nome[80];
	
	//Nomes registrados
	for(i=0;i<contador;++i){
		printf("%s ", c[i].nome);
	}
	
	printf("\nDigite o nome a ser pesquisado: ");
	fflush(stdin); 
	scanf("%[^\n]", &pesq_nome);

	
	int acha = 0;
	i = 0;
	while (i<contador && acha == 0){
		if(strcmp(pesq_nome, c[i].nome) == 0){
			acha = 1;
		}else{
			++i;
		}	
	}
	if(acha==1){
		printf("Dados do aluno\n");
		printf("%s\n", c[i].nome);
		
		int j;
		printf("Notas do aluno: ");
		for(j=0;j<2;++j){
			printf("%d ",c[i].notas[j]);
		}
		
		printf("\nSituacao: ");
		int media_notas = media(c[i]);
		if(media_notas>=7){
			printf("Aprovado(a)");
		}else{printf("Reprovado(a)");
		}
	}
	else{printf("Nao possui um usuario registrado com esta nome \n");
	}
}

void classificacao(){
	char maior[80];
	for(i=0; i<contador; ++i){
		for(j=i;j<contador;++j){
			if (strcmp(c[i].nome, c[j].nome) >= 0){
				strcpy(maior, c[i].nome);
				strcpy(c[i].nome, c[j].nome);
				strcpy(c[j].nome, maior);
			}
		}
	}
	printf("\nNomes em ordem alfabetica: ");
	for(i=0;i<contador;++i){
		printf("%s ", c[i].nome);
	}
}

void alteracao(){
	char pesq_nome[80];
	printf("\nDigite o nome do usuário registrado que será alterado: ");
	fflush(stdin); 
	scanf("%[^\n]", &pesq_nome);
	
	int acha = 0;
	i = 0;
	while (i<contador && acha == 0){
		if(strcmp(pesq_nome, c[i].nome) == 0){
			acha = 1;
		}else{
			++i;
		}	
	}
	if (acha==1){
		char novo_nome[80];
		
		printf("Usuário a ser alterado %s\n", c[i]);
		
		printf("Nome: ");
		fflush(stdin); 
		scanf("%[^\n]", &novo_nome);
		strcpy(c[i].nome, novo_nome);
		
		printf("\nDigite as novas notas\n");
		for(j=0;j<2;++j){
			printf("Digite a %d nota: ", j+1);
			fflush(stdin); scanf("%d", &c[i].notas[j]);
		}
		
		printf("\nRegistro alterado\n");
	}else{
		printf("Não possui registro com esse nome");
	}
}

void aprovados(){
	printf("\nAprovados\n");
	int k;
	for(k=0;k<contador;++k){
		int media_notas = media(c[k]);	
		if(media_notas>=7){
			printf("%s\n", c[k].nome);
		}	
	}
}

void reprovados(){
	printf("\nReprovados\n");
	int t;
	for(t=0;t<contador;++t){
		int media_notas = media(c[t]);	
		if(media_notas<7){
			printf("%s\n", c[t].nome);
		}	
	}
}

int main(){	
	char escolha;
	while(escolha != 's'){
		printf("\n\n***MENU***\n");
		printf("a-cadastrar os 20 alunos e suas notas\n");
		printf("b-classificar os alunos cadastrados\n");
		printf("c-corrigir alunos e/ou notas que tenham sido cadastradas com erros\n");
		printf("d-pesquisar alunos por nome\n");
		printf("e-listar alunos aprovados\n");
		printf("f-listar alunos reprovados\n");
		printf("s-encerrar programa\n");
		
		printf("\nEscolha a opcao desejada: ");
		fflush(stdin);scanf("%c", &escolha);
		
		switch (escolha){
			case 'a':cadastro();break;
			case 'b':classificacao();break;
			case 'c':alteracao();break;
			case 'd':pesquisa_nome();break;
			case 'e':aprovados();break;
			case 'f':reprovados();break;
		}	
	}
				
}

