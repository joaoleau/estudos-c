#include <stdio.h>
#define MAX_SIZE 3

typedef struct
{
    int dados[MAX_SIZE];
    int ultimo, inicio;
} Fila;

void iniciar(Fila *fila)
{
    fila->ultimo = 0;
    fila->inicio = 0;
}

int esta_vazia(Fila *fila)
{
    return (fila->ultimo == fila->inicio);
}

int esta_cheia(Fila *fila)
{
    return (fila->ultimo - fila->inicio == MAX_SIZE);
}

int add(Fila *fila, int value)
{
    if (esta_cheia(fila))
    {
        printf("Lista já esta cheia");
        return -1;
    }
    fila->dados[fila->ultimo % MAX_SIZE] = value;
    fila->ultimo++;
    return 0;
}

void remover(Fila *fila)
{
    if (esta_vazia(fila))
    {
        printf("Lista ja esta vazia");
        return -1;
    }
    printf("Valor a ser tirado: %d", fila->dados[fila->inicio % MAX_SIZE]);
    fila->inicio = (fila->inicio + 1) % MAX_SIZE;
    return 0;
}

void view(Fila *fila)
{
    printf("\n");
    for (int i = fila->inicio; i < fila->ultimo; ++i)
    {
        printf("%d ", fila->dados[i % MAX_SIZE]);
    }
    return;
}

int procurar_index(Fila *fila, int value)
{
    for (int position = fila->inicio; position < fila->ultimo; ++position)
    {
        if (fila->dados[position % MAX_SIZE] == value)
        {
            return (position - fila->inicio);
        }
    }
    return -1;
}

int main()
{
    int i, opcao = 0;
    Fila fila;
    iniciar(&fila);
    while (opcao != 5)
    {
        printf("\n1 - Adicionar na Fila\n2 - Remover\n3 - Visualizar Fila\n4 - Localizar um elemento\n5 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor que quer inserir: ");
            scanf("%d", &i);
            add(&fila, i);
            break;
        case 2:
            remover(&fila);
            break;
        case 3:
            view(&fila);
            break;
        case 4:
            printf("Digite o valor que quer procurar: ");
            scanf("%d", &i);
            printf("Indice %d", procurar_index(&fila, i));
            break;
        }
    }

    return 0;
}