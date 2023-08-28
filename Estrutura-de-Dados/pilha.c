#include <stdio.h>
#define MAX_SIZE 20

typedef struct pilha
{
    int dados[MAX_SIZE];
    int topo;
} Pilha;

// Função para inicializar a pilha
void iniciar(Pilha *pilha)
{
    pilha->topo = -1;
}

// Função para verificar se a pilha está vazia
int esta_vazia(Pilha *pilha)
{
    return pilha->topo == -1;
}

// Função para verificar se a pilha está cheia
int esta_cheia(Pilha *pilha)
{
    return pilha->topo == MAX_SIZE - 1;
}

// Função para empilhar um elemento
void push(Pilha *pilha, int value)
{
    if (esta_cheia(pilha))
    {
        printf("A pilha está cheia. Não é possível empilhar.\n");
        return;
    }
    pilha->dados[++pilha->topo] = value;
    return;
}

// Função para desempilhar um elemento
int pop(Pilha *pilha)
{
    if (esta_vazia(pilha))
    {
        printf("A pilha está vazia. Não é possível desempilhar.\n");
        return -1; // Valor inválido para indicar erro
    }
    return pilha->dados[pilha->topo--];
}

// Função para exibir o elemento do topo da pilha
int peek(Pilha *pilha)
{
    if (esta_vazia(pilha))
    {
        printf("A pilha está vazia.\n");
        return -1; // Valor inválido para indicar erro
    }
    return pilha->dados[pilha->topo];
}

void view(Pilha *pilha)
{
    printf("\n PILHA: \n");
    for (int i = pilha->topo; i >= 0; --i)
    {
        printf(" %d\n", pilha->dados[i]);
    }
    printf(" ------ \n");
}

int main()
{
    int i, opcao = 0;
    Pilha pilha;
    iniciar(&pilha);
    while (opcao != 5)
    {
        printf("\n1 - Adicionar na Pilha\n2 - Remover\n3 - Visualizar Pilha\n4 - Mostrar topo da Pilha\n5 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor que quer inserir: ");
            scanf("%d", &i);
            push(&pilha, i);
            break;
        case 2:
            pop(&pilha);
            break;
        case 3:
            view(&pilha);
            break;
        case 4:
            printf("Topo da Pilha: %d", peek(&pilha));
            break;
        }
    }

    return 0;
}