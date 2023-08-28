#include <stdio.h>
#define MAX_SIZE 20

typedef struct
{
    int dados[MAX_SIZE];
    int ultimo;
} Fila;

void iniciar(Fila *fila)
{
    fila->ultimo = -1;
    return;
}

int esta_cheia(Fila *fila)
{
    return fila->ultimo == MAX_SIZE - 1;
}

int esta_vazia(Fila *fila)
{
    return fila->ultimo == -1;
}

int add(Fila *fila, int value)
{
    if (esta_cheia(fila))
    {
        printf("Lista já esta cheia");
        return -1;
    }
    fila->dados[++fila->ultimo] = value;
}

int remover(Fila *fila)
{
    if (esta_vazia(fila))
    {
        printf("Lista ja esta vazia");
    }

    int value = fila->dados[0];
    --fila->ultimo;
    for (int position = 0; position <= fila->ultimo; ++position)
    {
        fila->dados[position] = fila->dados[position + 1];
    }
    return value;
}

void view(Fila *fila)
{
    printf("\n");
    for (int i = 0; i <= fila->ultimo; ++i)
    {
        printf("%d ", fila->dados[i]);
    }
    return;
}

int view_dado(Fila *fila, int value)
{
    int r = (-1);
    for (int position = fila->ultimo; position >= 0; --position)
    {
        if (fila->dados[position] == value)
        {
            r = position;
        }
    }
    if (r == -1)
    {
        printf("O numero %d nao esta na fila", value);
        return -1;
    }
    printf("O numero %d procurado esta no %d lugar", value ,r + 1);
    return r;
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
            view_dado(&fila, i);
            break;
        }
    }

    return 0;
}