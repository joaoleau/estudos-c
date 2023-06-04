#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int x = 0;
char nome[80];
char idade[3];
char endereco[80];
char telefone[10];
int contador = 0;
int i = 0;

struct cad_user{
	char nome[80];
	char idade[3];
	char endereco[80];
	char telefone[10];
};
struct cad_user aluno[3]; 



void cadastro(){
	if (contador < 3){
		printf("Digite o Nome: ");
		fflush(stdin); 
		fgets(aluno[contador].nome,80,stdin);
		
		printf("Digite a Idade: ");
		fflush(stdin); 
		fgets(aluno[contador].idade,3,stdin);
		
		printf("Digite a Endereço: ");
		fflush(stdin); 
		fgets(aluno[contador].endereco,80,stdin);
		
		printf("Digite a Telefone: ");
		fflush(stdin); 
		fgets(aluno[contador].telefone,10,stdin);
	
		++contador;
	}
	else{
		printf("Nao tem mais espaço para novos registros!");
	}
}



void pesquisa_idade(){
	char pesq_idade[3];
	printf("Digite a idade a ser pesquisada: ");
	fflush(stdin); fgets(pesq_idade,3,stdin);
	
	int acha = 0;
	i = 0;
	while(acha==0 && i<=2){
		if(strcmp(aluno[i].idade, pesq_idade) == 0){
			acha = 1;
		}else{
			++i;
		}
	}
	if(acha==1){
		printf("Achei! A idade corresponde ao %s", aluno[i]);
	}else{printf("Nao possui um usuario registrado com esta idade");
	}
}


void alteracao(){
	char pesq_nome[80];
	printf("Digite o nome do usuário registrado que será alterado: ");
	fflush(stdin); 
	fgets(pesq_nome,80,stdin);
	
	int acha = 0;
	i = 0;
	while (i<=2 && acha ==0){
		if(strcmp(pesq_nome, aluno[i].nome) == 0){
			acha = 1;
		}else{
			++i;
		}	
	}
	if (acha==1){
		char novo_nome[80];
		char nova_idade[3];
		char novo_endereco[80];
		char novo_telefone[10];
		
		
		printf("Usuário a ser alterado %s", aluno[i]);
		
		printf("Nome: ");
		fflush(stdin); 
		fgets(novo_nome, 80, stdin);
		//aluno[i].nome = novo_nome;
		strcpy(aluno[i].nome,novo_nome);
		
		printf("Idade: ");
		fflush(stdin); 
		fgets(nova_idade, 3, stdin);
		//aluno[i].idade = nova_idade;
		strcpy(aluno[i].idade,nova_idade);
		
		printf("Endereço: ");
		fflush(stdin); fgets(novo_endereco, 80, stdin);
		//aluno[i].endereco = novo_endereco;
		strcpy(aluno[i].endereco,novo_endereco);
		
		printf("Telefone: ");
		fflush(stdin); fgets(novo_telefone, 10, stdin);
		//aluno[i].telefone = novo_telefone;
		strcpy(aluno[i].telefone,novo_telefone);
		
		printf("\nRegistro alterado\n");
	}else{
		printf("Não possui registro com esse nome");
	}
}

void classificacao(){
	char maior[80];
	int i, j;
	
	for (i=0;i<3;++i){
		for(j=i;j<3;++j){
			if(strcmp(aluno[i].nome, aluno[j].nome) >= 0){
				strcpy(maior, aluno[i].nome);
				strcpy(aluno[i].nome, aluno[j].nome);
				strcpy(aluno[j].nome, maior);
	
			}
		}
	}
	
	for (i=0; i<3; ++i){
		printf("%s", aluno[i]);
	}	
}

int main(){
	while(x!=5){
		//Menu
		switch (x){
			case 1:
				cadastro(); break;
			case 2:
				pesquisa_idade(); break;
			case 3:
				classificacao(); break;
			case 4:
				alteracao(); break;
		
		}
		
		
		printf("\n-=Menu de Agenda=-\n");
		printf("Cadastro(1) \nPesquisa de registro por idade(2) \nClassificacao alfabetica(3) \nAlteração de registro digitado com erro(4) \nSair do Menu (5)\n");
		fflush(stdin);scanf("%d", &x);
	}
	printf("Saiu do programa\n");
	//printf("Achei a idade corresponde ao %s", aluno[i].nome);
}

