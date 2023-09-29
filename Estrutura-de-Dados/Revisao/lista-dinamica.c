#include <stdio.h>
#include <malloc.h>

int id = 0;

typedef struct celula{
    int id;
    int valor;
    struct celula *prox;
}Celula;

typedef struct{
    Celula *head;
}Lista;

void iniciar(Lista *lista){
    lista->head = malloc(sizeof(Celula));
    lista->head->prox = lista->head;
}

void add(Lista *lista, int valor){
    Celula *novo = malloc(sizeof(Celula));
    novo->id = id++;
    novo->valor = valor;
    novo->prox = lista->head->prox;
    lista->head->prox = novo;
}

void remover(Lista *lista, int id){
    Celula *atual = lista->head;
    Celula *anterior = NULL;

    while(atual != lista->head && atual->id != id){
        anterior = atual;
        atual = atual->prox;
    }

    if (anterior == NULL){
        lista->head = atual->prox;
    }else{
        anterior->prox = atual->prox;
    }
    free(atual);
}

void view(Lista *lista){
    Celula *aux = lista->head->prox;
    printf("\nLista: ");
    while(aux != lista->head){
        printf("%d|%d ", aux->id, aux->valor);
        aux = aux->prox;
    }
}

int main(){
    Lista lista;
    iniciar(&lista);
    
    add(&lista, 10);
    add(&lista, 11);
    add(&lista, 12);
    view(&lista);
    return 0;
}