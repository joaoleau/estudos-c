#include <stdio.h>
//Exercicio 3 - c
float prestacao(float *valor, float *taxa, int *tempo){
	float prestacao;
	prestacao = *valor + (*valor * (*taxa/100) * *tempo);
	return (prestacao);
}

int main(){
	float *p_valor, *p_taxa, valor, taxa;
	int *p_tempo, tempo;
	
	printf("Valor: ");
	scanf("%f", &valor);
	
	printf("Taxa: ");
	scanf("%f", &taxa);
	
	printf("Tempo: ");
	scanf("%d", &tempo);
	
	p_valor = &valor;
	p_taxa = &taxa;
	p_tempo = &tempo;
	
	// prestacao(valor, taxa, tempo)
	printf("R$ %.2f", prestacao(p_valor,p_taxa, p_tempo));
}

