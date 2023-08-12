#include <stdio.h>
#include <conio.h>
#define MAX_SIZE 2

typedef struct stack
{
    int nums[MAX_SIZE];
    int top;
} Stack;

int is_full(Stack *stack)
{
    return stack->top == MAX_SIZE - 1;
}

int is_empty(Stack *stack)
{
    return stack->top == -1;
}

void initialize(Stack *stack)
{
    stack->top = -1;
}

int push(Stack *stack, int value)
{
    if (is_full(stack))
    {
        printf("\nA Pilha ja esta cheia\n");
        return;
    }       
    ++stack->top;
    stack->nums[stack->top] = value;
    return stack->top;
}

int pop(Stack *stack)
{
    if (is_empty(stack))
    {
        printf("\nA pilha ja esta vazia\n");
        return -1;
    }
    --stack->top;
    return stack->nums[stack->top + 1];
}

int top(Stack *stack)
{
    return stack->nums[stack->top];
}

int main()
{
    Stack *s;
    initialize(&s);
    push(&s, 2);
    push(&s, 4);
    //pop(&s);
    printf("\n%d\n", top(&s));

    return 0;
}