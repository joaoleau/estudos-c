#include <stdio.h>
#include <malloc.h>

typedef struct no{
    int num;
    struct no *proximo;
}No;

typedef struct{
    No *topo;
    int tam;
}Pilha;

int main(){
    return 0;
}
