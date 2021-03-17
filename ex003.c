#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    int idade;
    float peso;

    printf("<<<     EX003 - DADOS     >>>\n\n");
    printf("\nQual é seu nome? ");
    scanf("%s", nome);
    printf("Qual a sua idade? ");
    scanf("%d", &idade);
    printf("Qual seu peso? ");
    scanf("%f", &peso);

    printf("---------- PROCESSANDO ----------\n");
    printf("\nMuito prazer, %s. você tem %d anos e pesa %.2fKg correto?", nome, idade, peso);

}
