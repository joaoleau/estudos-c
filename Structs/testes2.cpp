#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	struct cad_aluno
	{
		char nome[40];
		float notas[4];
	}; 
	struct cad_aluno aluno[2], x; 
	
	int i,j;
	float nota_alu;
	printf("Cadastro de alunos\n\n");
	
	/*entrada de dados */
	for (j=0;j<=1;j++)
	{
		printf("Informe o %do. Aluno:\n\n", j+1);
		fflush(stdin); fgets(aluno[j].nome, 40, stdin);
		
		for (i=0;i<=1;i++)
		{
			printf("Informe a %da. nota:", i+1); 
			fflush(stdin); scanf("%f", &nota_alu);
			aluno[j].notas[i]=nota_alu; 
		}
	}
	/* classificacao dos dados */
	for (i=0;i<=1;i++)
	for (j=i+1; j<=7; j++)
	if (strcmp (aluno[i].nome, aluno[j].nome) >0)
	{
	x=aluno[i];
	aluno[i]=aluno[j];
	aluno[j]=x;
	}
	/* saida dos dados */
	for (j=0; j<=7;j++)
	{
	printf("Nome:"); puts (aluno[j].nome); 
	for (i=0;i<=1;i++)
	printf("Nota %da: %6.2f\n", i+1, aluno[j].notas[i]);
	}
	getch();
}

