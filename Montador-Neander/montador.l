%{
#include <stdio.h>
#include <conio.h>
#include <string.h>
%}

%option noyywrap

%{
FILE *arquivoSaida;

void append(int opcode) {
	fputc(opcode, arquivoSaida);
}
%}

%%

LDA    { append(0x20); append(0x00); }
STA    { append(0x10); append(0x00); }
HLT    { append(0xF0); append(0x00); }
NOP    { append(0x00); append(0x00); }
ADD    { append(0x30); append(0x00); }
OR     { append(0x40); append(0x00); }
AND    { append(0x50); append(0x00); }
NOT    { append(0x60); append(0x00); }
JMP    { append(0x80); append(0x00); }
JN     { append(0x90); append(0x00); }
JZ     { append(0xA0); append(0x00); }
[0-9]+ { int num; sscanf(yytext, "%X", &num); fputc(num, arquivoSaida); append(0x00); }
<<EOF>>		{ return 0; }
%%

//Preenche de zero
void Zero(FILE *arquivo, int tamanhoNeander) {
    int tamanho = ftell(arquivo);
    while (tamanho < tamanhoNeander) {
        fputc(0x00, arquivo);
        tamanho++;
    }
}


int main() {
    FILE *arquivoEntrada = fopen("entrada.asm", "r");
    arquivoSaida = fopen("saida.mem", "wb");
    
	//Cabeçalho Neander
	fputc(0x03, arquivoSaida);
    fputc(0x4E, arquivoSaida);
    fputc(0x44, arquivoSaida);
    fputc(0x52, arquivoSaida);

    yyin = arquivoEntrada;
    yylex();
	Zero(arquivoSaida, 516);
    
	fclose(arquivoSaida);
    fclose(arquivoEntrada);
    return 0;
}

