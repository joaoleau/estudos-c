#include <stdio.h>
#include <conio.h>
#include <string.h>

FILE *data, *tempdata;
char row[150];

struct registration
{
	char id[4];
	char name[80];
	char email[30];
	char telephone[30];
	char birthday[6];
};
struct registration r;

struct registration row_to_object(char row[150])
{
	char *sub_row;

	sub_row = strtok(row, ";");
	strncpy(r.id, sub_row, sizeof(r.id) - 1);
	r.id[sizeof(r.id) - 1] = '\0';

	int i = 0;
	while (i < 4)
	{
		sub_row = strtok(NULL, ";");
		switch (i)
		{
		case 0:
			strncpy(r.name, sub_row, sizeof(r.name) - 1);
			r.name[sizeof(r.name) - 1] = '\0';
			break;
		case 1:
			strncpy(r.email, sub_row, sizeof(r.email) - 1);
			r.email[sizeof(r.email) - 1] = '\0';
			break;
		case 2:
			strncpy(r.telephone, sub_row, sizeof(r.telephone) - 1);
			r.telephone[sizeof(r.telephone) - 1] = '\0';
			break;
		case 3:
			strncpy(r.birthday, sub_row, sizeof(r.birthday) - 1);
			r.birthday[sizeof(r.birthday) - 1] = '\0';
			break;
		}
		++i;
	}
	return r;
}


int verify_id(int size) {
    int u_number = 1;
	const int IDS_SIZE=size;
	int ids[IDS_SIZE];
	int a;
	
	data = fopen("data.txt", "r");

	for(a = 0;fgets(row, 150, data) != NULL; ++a){
		r = row_to_object(row);
		ids[a] = atoi(r.id);
	}

	fclose(data);

    while (1) {
        int number_exists = 0;

        for (int i = 0; i < size; i++) {
            if (ids[i] == u_number) {
                number_exists = 1;
                break;
            }
        }

        if (!number_exists) {
            return u_number;
        }

        u_number++;
    }
}
int id_generator()
{
	int rows;
	data = fopen("data.txt", "r");
	for (rows = 0; fgets(row, 150, data) != NULL; ++rows){}
	fclose(data);
	int id = verify_id(rows);
	
	return id;
}

void new_registration()
{
	struct registration r;
	int index;
	printf("\nDados para o cadastro");

	printf("\nNome: ");
	fflush(stdin);
	scanf("%80[^\n]", &r.name);

	printf("\nE-mail: ");
	fflush(stdin);
	scanf("%30[^\n]", &r.email);

	printf("\nTelefone: ");
	fflush(stdin);
	scanf("%11[^\n]", &r.telephone);

	printf("\nData de aniversario: ");
	fflush(stdin);
	scanf("%5[^\n]", &r.birthday);

	index = id_generator();

	data = fopen("data.txt", "a");
	fprintf(data, "%d;%s;%s;%s;%s\n", index, r.name, r.email, r.telephone, r.birthday);
	fclose(data);
}

void change_registration()
{
	char index[4];
	int option = 0;

	printf("Digite o Id do cadastro que deseja alterar: ");
	fflush(stdin);
	scanf("%[^\n]", &index);

	data = fopen("data.txt", "r");
	while (fgets(row, 150, data) != NULL)
	{
		struct registration r;
		r = row_to_object(row);

		if (strstr(r.id, index))
		{
			fclose(data);

			printf("\nEscolha o que deseja alterar\n");
			printf("1: Nome\n2: Email\n3: Telefone\n4: Aniversario\n");
			fflush(stdin);
			scanf("%d", &option);

			switch (option)
			{
			case 1:
				printf("Novo Nome:");
				fflush(stdin);
				scanf("%80[^\n]", &r.name);
				break;
			case 2:
				printf("Novo Email:");
				fflush(stdin);
				scanf("%30[^\n]", &r.email);
				break;
			case 3:
				printf("Novo Telefone:");
				fflush(stdin);
				scanf("%11[^\n]", &r.telephone);
				break;
			case 4:
				printf("Novo Aniversario:");
				fflush(stdin);
				scanf("%5[^\n]", &r.birthday);
				break;
			}
			fclose(data);
			remove_row(index);
			data = fopen("data.txt", "a");
			fprintf(data, "%s;%s;%s;%s;%s", r.id, r.name, r.email, r.telephone, r.birthday);
			fclose(data);
		}
	}
}

void remove_registration()
{
	char index[4];
	printf("\nDigite o Id do cadastro que deseja remover: ");
	fflush(stdin);
	scanf("%[^\n]", &index);
	remove_row(index);
}

void view_registration()
{
	char row[150], index[4];

	printf("\nDigite o Id do cadastro que deseja ver: ");
	fflush(stdin);
	scanf("%[^\n]", &index);

	data = fopen("data.txt", "r");

	while (fgets(row, 150, data) != NULL)
	{
		r = row_to_object(row);

		if (strstr(r.id, index))
		{

			printf("\nId: %s\nNome: %s\nEmail: %s\nTelefone: %s\nAniversario: %s\n", r.id, r.name, r.email, r.telephone, r.birthday);
		}
	}
	fclose(data);
}

void remove_row(char index[4])
{
	data = fopen("data.txt", "r");
	tempdata = fopen("dataTemp.txt", "w");

	while (fgets(row, 150, data) != NULL)
	{
		r = row_to_object(row);

		if (strstr(r.id, index) == NULL)
		{
			fprintf(tempdata, "%s;%s;%s;%s;%s", r.id, r.name, r.email, r.telephone, r.birthday);
		}
	}
	fclose(data);
	fclose(tempdata);
	remove("data.txt");
	rename("dataTemp.txt", "data.txt");
}

void registrations()
{
	data = fopen("data.txt", "r");

	while (fgets(row, 150, data) != NULL)
	{
		r = row_to_object(row);
		printf("Id: %s\nNome: %s\nEmail: %s\nTelefone: %s\nAniversario: %s\n", r.id, r.name, r.email, r.telephone, r.birthday);
	}
	fclose(data);
}

void main()
{
	int option;
	while (option != 6)
	{
		printf("\n---=MENU=---\n");
		printf("1 Cadastrar\n");
		printf("2 Alterar Cadastro\n");
		printf("3 Remover Cadastro\n");
		printf("4 Exibir Cadastro\n");
		printf("5 Visualizar Cadastros\n");
		printf("6 Sair\n");

		fflush(stdin);
		scanf("%d", &option);

		switch (option)
		{
		case 1:
			new_registration();
			break;
		case 2:
			change_registration();
			break;
		case 3:
			remove_registration();
			break;
		case 4:
			view_registration();
			break;
		case 5:
			registrations();
			break;
		}
	}
}