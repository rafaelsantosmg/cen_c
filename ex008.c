#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    char letra;

    printf("<<< EX008 - Alfabeto >>>\n");
    printf("\nDigite uma letra: ");
    letra = getchar();
    printf("\nAntes da letra %c temos a letra %c. Depois temos a letra %c.", letra, letra - 1, letra + 1);
    printf("\n\n");
}