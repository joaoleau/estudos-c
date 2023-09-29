#include <stdio.h>
#include <malloc.h>

typedef struct no{
    int valor;
    struct no *prox;
}No;

typedef struct{
    No *inicio;
    No *ultimo;
}Fila;

void iniciar(Fila *f){
    f->inicio = NULL;
    f->ultimo = NULL;
}

void add(Fila *f, int valor){
    No *novo = malloc(sizeof(No));
    novo->valor = valor;
    
    if(f->inicio == NULL){
        f->inicio = novo;
    }
    else{
        f->ultimo->prox = novo;
    }
    f->ultimo = novo;
    f->ultimo->prox = NULL;
}

int main(){
    return 0;
}