#include <stdio.h>
#include <malloc.h>

typedef struct celula{
    int valor;
    int coluna;
    struct celula *prox;
}Celula;

typedef struct{
    int linhas;
    int colunas;
    Celula *area;
}Matriz;

void iniciar(Matriz *matriz, int linha, int coluna){
    matriz->colunas = coluna;
    matriz->linhas = linhas;
    matriz->area = malloc(sizeof(Celula));

    for(int i = 0; i<linha; i++){
        matriz->area[i] = NULL;
    }
}