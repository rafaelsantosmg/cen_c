#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    float num;

    printf("<<< EX007 - Dobro e Terça Parte >>>\n");
    printf("\nDigite um número: ");
    scanf("%f", &num);
    printf("Analisando o número %.0f, seu dobro é %.0f e sua terça parte é %.2f", num, num * 2, num / 3);
    printf("\n\n");
}