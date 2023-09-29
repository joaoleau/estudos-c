#include <stdio.h>
#include <malloc.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

typedef struct{
    No *inicio;
    No *ultimo;
}Fila;

void iniciar(Fila *fila){
    fila->ultimo = NULL;
    fila->inicio = NULL;
};

void add(Fila *fila, int valor){
    No *novo = malloc(sizeof(No));
    novo->valor = valor;
    if (fila->inicio == NULL){
        fila->inicio = novo;
    }
    else{
        fila->ultimo->proximo = novo;

    }
    fila->ultimo = novo;
    fila->ultimo->proximo = NULL;
}

void remover(Fila *fila){
    No *remover = fila->inicio;
    fila->inicio = remover->proximo;
    free(remover);
}

void view(Fila *fila){
    No *aux = fila->inicio;
    while(aux){
        printf("%d ", aux->valor);
        aux = aux->proximo;
    }
}

int main(){
    Fila fila;
    iniciar(&fila);
    add(&fila, 1);
    add(&fila, 2);
    add(&fila, 3);
    add(&fila, 4);
    view(&fila);
    return 0;
}