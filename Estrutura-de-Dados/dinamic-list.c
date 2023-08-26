#include <stdio.h>
#include <malloc.h>

typedef struct celula
{
    int data;
    struct celula *proximo;
} Celula;

Celula *temp;
Celula *fila;

// void iniciar(Celula *temp){

// }

void add(Celula *fila, int value)
{
    temp->data = value;
    temp->proximo = NULL;
    fila = temp;
    temp = NULL;
}

void view(Celula *fila)
{
    Celula *aux = fila;
    while (aux)
    {
        printf("%d\n", aux->data);
        aux = aux->proximo;
    }
}

int main()
{
    temp = (Celula *)malloc(sizeof(Celula));
    temp->proximo = NULL;
    add(fila, 2);
    view(fila);

    return 0;
}