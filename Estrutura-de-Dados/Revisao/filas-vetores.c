#include <stdio.h>
#define MAX_SIZE 3

//Fila - Add final e Sai fim;


typedef struct{
    int valores[MAX_SIZE];
    int inicio, ultimo;
}Fila;

void iniciar(Fila *fila){
    fila->ultimo = 0;
    fila->inicio = 0;
}

int esta_vazia(Fila *fila){
    return (fila->ultimo == fila->inicio);
}

int esta_cheia(Fila *fila){
    return (fila->ultimo - fila->inicio == MAX_SIZE);
}

//Adiciona no Final
void add(Fila *fila, int valor){
    if (esta_cheia(fila)){
        printf("Ta cheia");
        return;
    }
    fila->valores[fila->ultimo % MAX_SIZE] = valor;
    ++fila->ultimo;
}

//Remover do Inicio
void remover(Fila *fila){
    if (esta_vazia(fila)){
        printf("Ta vazia");
        return;
    }
    printf("\nValor tirado: %d\n", fila->valores[fila->inicio % MAX_SIZE]);
    fila->inicio++;
}

void view(Fila *fila){
    for( int i = fila->inicio; i < fila->ultimo; i++){
        printf("%d ", fila->valores[i % MAX_SIZE]);
    }
}

int main(){
    Fila fila;
    iniciar(&fila);
    add(&fila, 10);
    add(&fila, 2);
    add(&fila, 4);
    view(&fila);
    remover(&fila);
    add(&fila, 5);
    view(&fila);
    return 0;
}