#include <stdio.h>
#include <malloc.h>

typedef struct celula
{
    int valor;
    struct celula *proximo;
} Celula;

typedef struct
{
    Celula *inicio;
    Celula *fim;
} Fila;

void iniciar(Fila *fila)
{
    fila->fim = NULL;
    fila->inicio = NULL;
}

void add(Fila *fila, int valor)
{
    Celula *novo = malloc(sizeof(Celula));
    novo->valor = valor;

    if (fila->inicio == NULL)
    {
        fila->inicio = novo;
    }
    else
    {
        fila->fim->proximo = novo;
    }
    fila->fim = novo;
    fila->fim->proximo = NULL;
}

void remover(Fila *fila)
{
    Celula *remover = fila->inicio;
    fila->inicio = remover->proximo;
    free(remover);
}

void view(Fila *fila)
{
    Celula *aux = fila->inicio;
    printf("\nFila: ");
    while (aux)
    {
        printf("%d ", aux->valor);
        aux = aux->proximo;
    }
}

int main()
{
    Fila fila;
    iniciar(&fila);

    add(&fila, 10);
    add(&fila, 11);
    add(&fila, 12);
    view(&fila);
    remover(&fila);
    view(&fila);
    return 0;
}