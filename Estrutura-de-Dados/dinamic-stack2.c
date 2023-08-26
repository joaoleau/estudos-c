#include <stdio.h>
#include <malloc.h>

typedef struct no
{
    int num;
    struct no *proximo;
} No; // repesenta um elemento

typedef struct
{
    No *topo;
} Pilha; // representa a pilha

void iniciar(Pilha *pilha)
{
    pilha->topo = NULL;
}

void push(Pilha *pilha, int value)
{
    No *novo = malloc(sizeof(No));
    if (novo)
    {
        novo->num = value;
        novo->proximo = pilha->topo;
        pilha->topo = novo;
    }
    else
    {
        printf("Erro ao alocar");
    }
}

void pop(Pilha *pilha)
{
    if (pilha->topo != NULL)
    {
        No *remover = pilha->topo;
        pilha->topo = remover->proximo;
        free(remover);
    }
    else
    {
        printf("Pilha ja esta vazia");
    }
}

void view(Pilha *pilha)
{
    No *aux = pilha->topo;
    while (aux)
    {
        printf("%d ", aux->num);
        aux = aux->proximo;
    }
}

int main()
{
    Pilha pilha;
    iniciar(&pilha);
    push(&pilha, 3);
    push(&pilha, 13);
    view(&pilha);
    return 0;
}
