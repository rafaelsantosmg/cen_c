#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
    setlocale(LC_ALL, "Portuguese_Brasil");

    char nome[30];
    int idade;
    float peso;

    printf("<<<     EX003 - DADOS     >>>\n\n");
    printf("\nQual é seu nome? ");
    fgets(nome, 30, stdin);
    fflush(stdin);

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("Qual seu peso? ");
    scanf("%f", &peso);

    int quebra = strcspn(nome, "\n");
    nome[quebra] = '\0';

    printf("\n---------- PROCESSANDO ----------\n");
    printf("\nMuito prazer, %s. você tem %d anos e pesa %.2fKg correto?", nome, idade, peso);
    printf("\n\n");
}
