//Exercicio 1-a
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int i = 0;
int contador = 0;

struct cadastro{
	char nome[80];
	char endereco[80];
	char email[30];
	char telefone[10];
};
struct cadastro c[5];

void cadastro(){
	if(contador < 5){
		printf("Digite o nome: ");
		fflush(stdin); 
		scanf("%[^\n]", &c[contador].nome);
		
		printf("Digite o endereço: ");
		fflush(stdin); scanf("%[^\n]", &c[contador].endereco);
		
		printf("Digite o email: ");
		fflush(stdin); scanf("%[^\n]", &c[contador].email);
		
		printf("Digite o telefone: ");
		fflush(stdin); scanf("%[^\n]", &c[contador].telefone);
		
		++contador;
	}else{
		printf("Sem espaco para novos registros");
	}
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
		printf("Dados do registro\n");
		printf("%s\n", c[i].nome);
		printf("%s\n", c[i].endereco);
		printf("%s\n", c[i].email);
		printf("%s\n", c[i].telefone);
	}
	else{printf("Nao possui um usuario registrado com esta nome \n");
	}
}

void classificacao(){
	char maior[80];
	int j;
	for(i=0; i<contador; ++i){
		for(j=i;j<contador;++j){
			if (strcmp(c[i].nome, c[j].nome) >= 0){
				strcpy(maior, c[i].nome);
				strcpy(c[i].nome, c[j].nome);
				strcpy(c[j].nome, maior);
			}
		}
	}
	printf("Nomes em ordem alfabetica: ");
	for(i=0;i<contador;++i){
		printf("%s ", c[i].nome);
	}
}

void alteracao(){
	char pesq_nome[80];
	printf("Digite o nome do usuário registrado que será alterado: ");
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
		char novo_endereco[80];
		char novo_email[30];
		char novo_telefone[10];	
		
		printf("Usuário a ser alterado %s\n", c[i]);
		
		printf("Nome: ");
		fflush(stdin); 
		scanf("%[^\n]", &novo_nome);
		strcpy(c[i].nome, novo_nome);
		
		printf("Endereco: ");
		fflush(stdin); 
		scanf("%[^\n]", &novo_endereco);
		strcpy(c[i].endereco, novo_endereco);
		
		printf("Email: ");
		fflush(stdin); 
		scanf("%[^\n]", novo_email);
		strcpy(c[i].email, novo_email);
		
		printf("Telefone: ");
		fflush(stdin); 
		scanf("%[^\n]", &novo_telefone);
		strcpy(c[i].telefone, novo_telefone);
		
		printf("\nRegistro alterado\n");
	}else{
		printf("Não possui registro com esse nome");
	}
}

void apagar(){
	char pesq_nome[80];
	printf("Digite o nome do usuário que será apagado: ");
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
		for (int j = i; j < contador - 1; j++) {
            c[j] = c[j + 1];
        }
        contador--;
        printf("\nRegistro apagado\n");
	}
	else{
		printf("Nao existe este usuario");
	}	
}

int main(){	
	char escolha;
	while(escolha != 's'){
		printf("\n***MENU***\n");
		printf("a- o cadastramento das informações: nome, endereço, e-mail e telefone.\n");
		printf("b- a pesquisa dos nomes.\n");
		printf("c- a classificação por ordem alfabética\n");
		printf("d- a alteração de algum registro que tenha sido fornecido com erro.\n");
		printf("e- a remoção de elementos cadastrados.\n");
		printf("s - encerrar programa");
		
		printf("Escolha a opcao desejada: ");
		fflush(stdin);scanf("%c", &escolha);
		
		switch (escolha){
			case 'a':cadastro();break;
			case 'b':pesquisa_nome();break;
			case 'c':classificacao();break;
			case 'd':alteracao();break;
			case 'e':apagar();break;
		}	
	}
				
}

