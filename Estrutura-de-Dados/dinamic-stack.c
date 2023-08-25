#include <stdio.h>
#include <malloc.h>

typedef struct no
{
    int num;
    struct no *proximo;
} No;

No* push(No *topo, int value)
{
    No *novo = malloc(sizeof(No)); // Ja que adicionará um novo é preciso criar alocando mais espaço

    // Verificando se a alocação deu certo
    if (novo)
    {
        novo->num = value;
        novo->proximo = topo; // Novo recebe o topo
        return novo;
    }
    else
    {
        printf("Erro ao alocar");
        return NULL;
    }
}

No* pop(No **topo){
    if(*topo!=NULL){
        No *remover = *topo;
        *topo = remover->proximo;
        return remover;
    }else{
        printf("Pilha vazia");
        return NULL;
    }
}

void view(No *topo){
    printf("\n");
    while(topo!=NULL){
        printf("%d ",topo->num);
        topo = topo->proximo;
    }
}

int main()
{
    No *remover, *topo = NULL; // Pilha
    topo = push(topo, 1);
    topo = push(topo, 10);
    //remover = pop(&topo);
    view(topo);

}