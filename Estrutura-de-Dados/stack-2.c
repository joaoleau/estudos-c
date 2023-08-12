#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct
{
    int data[MAX_SIZE];
    int top;
} Stack;

// Função para inicializar a pilha
void initialize(Stack *stack)
{
    stack->top = -1;
}

// Função para verificar se a pilha está vazia
int isEmpty(Stack *stack)
{
    return stack->top == -1;
}

// Função para verificar se a pilha está cheia
int isFull(Stack *stack)
{
    return stack->top == MAX_SIZE - 1;
}

// Função para empilhar um elemento
void push(Stack *stack, int value)
{
    if (isFull(stack))
    {
        printf("A pilha está cheia. Não é possível empilhar.\n");
        return;
    }
    stack->data[++stack->top] = value;
}

// Função para desempilhar um elemento
int pop(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("A pilha está vazia. Não é possível desempilhar.\n");
        return -1; // Valor inválido para indicar erro
    }
    return stack->data[stack->top--];
}

// Função para exibir o elemento do topo da pilha
int peek(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("A pilha está vazia.\n");
        return -1; // Valor inválido para indicar erro
    }
    return stack->data[stack->top];
}

int main()
{
    Stack stack;
    initialize(&stack);
    push(&stack, 10);
    push(&stack, 15);
    
    printf("Elemento do topo: %d\n", peek(&stack));
    printf("Desempilhando: %d\n", pop(&stack));
    printf("Desempilhando: %d\n", pop(&stack));
    printf("Elemento do topo: %d\n", peek(&stack));

    return 0;
}
