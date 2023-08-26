#include <stdio.h>
#include <malloc.h>

typedef struct celula
{
    int data;
    struct celula *prox;
} Celula;

typedef struct
{
    Celula *inicio;
} Lista;

void iniciar(Lista *list)
{
    list->inicio = NULL;
}

void add_inicio(Lista *list, int value)
{
    Celula *novo = malloc(sizeof(Celula));
    novo->data = value;
    novo->prox = list->inicio;
    list->inicio = novo;
    view(list);
}

void add_fim(Lista *list, int value)
{
    Celula *aux; Celula *novo = malloc(sizeof(Celula));

    if (novo)
    {
        novo->data = value;
        novo->prox = NULL;
        if (list->inicio == NULL)
        {
            list->inicio = novo;
        }
        else
        {
            aux = list->inicio;
            while (aux->prox)
            {
                aux = aux->prox;
            }
            aux->prox = novo;
            view(list);
        }
    }
    else
    {
        printf("Erro de alocação");
    }
}

void view(Lista *list)
{
    Celula *aux = list->inicio;
    printf("\n");
    while (aux)
    {
        printf("%d ", aux->data);
        aux = aux->prox;
    }
}

int main()
{
    Lista lista;
    iniciar(&lista);
    add_inicio(&lista, 3);
    add_inicio(&lista, 2);
    add_inicio(&lista, 4);
    printf("\n---------------------------");
    add_fim(&lista, 4);
    add_fim(&lista, 5);
    return 0;
}