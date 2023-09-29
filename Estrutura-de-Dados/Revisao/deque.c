#include <stdio.h>
#include <malloc.h>

typedef struct celula
{
    int valor;
    struct celula *antecessor;
    struct celula *sucessor;
} Celula;

typedef struct
{
    Celula *head;
} Deque;

// Proximo do "ultimo" é "head"

// Proximo do "head" é "inicio"
// Antecessor do "head" é "ultimo"

void iniciar(Deque *deque)
{
    deque->head = malloc(sizeof(Celula));
    deque->head->antecessor = deque->head;
    deque->head->sucessor = deque->head;
}

void add_inicio(Deque *deque, int valor)
{
    Celula *novo = malloc(sizeof(Celula));
    novo->valor = valor;

    novo->sucessor = deque->head->sucessor;
    novo->antecessor = deque->head;

    deque->head->sucessor = novo;
    deque->head->antecessor = novo;
}

void remover_inicio(Deque *deque)
{
    Celula *remover = deque->head->sucessor;

    deque->head->sucessor = remover->sucessor;
    remover->sucessor->antecessor = deque->head;
    free(remover);
}

void add_final(Deque *deque, int valor){
    Celula *novo = malloc(sizeof(Celula));
    novo->valor = valor;
    
    novo->sucessor = deque->head;
    novo->antecessor = deque->head->antecessor;

    deque->head->antecessor->sucessor = novo;
    deque->head->antecessor = novo;
}

void remover_final(Deque *deque){
    Celula *remover = deque->head->antecessor;
    remover->antecessor->sucessor = deque->head;
    deque->head->antecessor = remover->antecessor;
    free(remover);
    
}

void view(Deque *deque)
{
    Celula *aux = deque->head->sucessor;
    printf("\nDeque:");
    while (aux != deque->head)
    {
        printf("%d ", aux->valor);
        aux = aux->sucessor;
    }
}

int main()
{
    Deque deque;
    iniciar(&deque);
    // printf("Add inicio:");
    // add_inicio(&deque, 10);
    // add_inicio(&deque, 11);
    // add_inicio(&deque, 12);
    // view(&deque);
    // remover_inicio(&deque);
    // view(&deque);

    printf("\n\nAdd fim:");
    add_final(&deque, 10);
    add_final(&deque, 11);
    add_final(&deque, 12);
    view(&deque);
    remover_final(&deque);
    view(&deque);

    return 0;
}