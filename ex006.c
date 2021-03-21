#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("<<< EX006 - Antecessor e Sucessor >>>\n");
    printf("\nDigite um número: ");
    scanf("%d", &num);
    printf("\nAnalisando o número %d, seu antecessor é %d e seu sucessor é %d.", num, num - 1, num + 1);
    printf("\n\n");
}