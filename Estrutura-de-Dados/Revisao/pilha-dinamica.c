#include <stdio.h>
#include <malloc.h>

typedef struct no
{
    int valor;          // Valor
    struct no *proximo; // Indica o proximo
} No;                   // Representa um elemento

typedef struct
{
    No *topo; // O Topo e um No
} Pilha;      // Stuct da Pilha

// Precisa iniciar o Topo = NULL
void iniciar(Pilha *pilha)
{
    pilha->topo = NULL;
}

// Adicionar
void push(Pilha *pilha, int valor)
{
    // Cria-se um novo No
    No *novo = malloc(sizeof(No)); // Aloca memoria

    novo->valor = valor;         // Coloca o valor no novo
    novo->proximo = pilha->topo; // Proximo do novo recebe topo
    pilha->topo = novo;          // Topo recebe novo
}

// Remover
void pop(Pilha *pilha)
{

    // Verificar se esta vazia
    if (pilha->topo != NULL)
    {
        No *remover = pilha->topo;      // Coloca os valores do topo num No remover
        pilha->topo = remover->proximo; // Coloca no topo os proximos do topo
        free(remover);                  // Remove o topo
        return;
    }
    printf("Pilha vazia");
}

void view(Pilha *pilha)
{
    No *aux = pilha->topo; //Cria-se uma auxiliar p nao modificar a ordem
    while (aux)
    {
        printf("%d ", aux->valor); //Imprime valor da celula
        aux = aux->proximo; //aux recebe o proximo
    }
}

void peek(Pilha *pilha)
{
    printf("\nTopo: %d\n", pilha->topo->valor);
}

int main()
{

    Pilha pilha;
    iniciar(&pilha);
    push(&pilha, 1);
    push(&pilha, 2);
    push(&pilha, 3);
    push(&pilha, 4);
    push(&pilha, 5);
    view(&pilha);
    peek(&pilha);
    pop(&pilha);
    view(&pilha);
    peek(&pilha);
    return 0;
}
