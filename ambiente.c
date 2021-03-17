#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    //int inteiro;
    //float real;
    //char letra;
    char nome[30];
    /*
    printf("Digite um número inteiro: ");
    scanf("%d", &inteiro);
    printf("Você digitou o número %d\n", inteiro);

    printf("\nDigite um número real: ");
    scanf("%f", &real);
    printf("Você digitou o número %f\n", real);

    printf("\nDigite apenas uma letra: ");
    getchar();
    letra = getchar();
    printf("Você digitou a letra %c\n", letra);
    */
    printf("\nDigite um nome: ");
    gets(nome);
    printf("Você digitou o nome %s", nome);
}
