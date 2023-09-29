#include <stdio.h>

typedef struct Pilha{
    int topo;
    int valores = [MAX_SIZE];
}Pilha;

void iniciar(Pilha *pilha){
    pilha->topo = -1;
}

int push(Pilha *pilha, int valor){
    pilha->valores[++pilha->topo] = valor;
    return pilha->valores[pilha->topo--];
}

int main(){
    
    
    return 0;
}
