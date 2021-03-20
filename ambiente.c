#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese_Brasil");

    int inteiro;
    float real;
    char letra;
    char nome[30];

    printf("Digite um número inteiro: ");
    scanf("%d", &inteiro);
    printf("Você digitou o número %d\n", inteiro);

    printf("\nDigite um número real: ");
    scanf("%f", &real);
    printf("Você digitou o número %f\n", real);

    printf("\nDigite apenas uma letra: ");
    fflush(stdin);
    letra = getchar();
    printf("Você digitou a letra %c\n", letra);

    printf("\nDigite um nome: ");
    fflush(stdin);
    fgets(nome, 30, stdin);
    printf("Você digitou o nome %s", nome);
}
