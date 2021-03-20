#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese_Brasil");
    srand(time(NULL));
    int n_pc = rand() % 5 +1, num;

    printf("<<< EX005 - Será que você acerta? >>>\n");
    printf("\nVou pensar em um número de 1 a 5, tente advinhar? ");
    printf("\nQual seu palpite? ");
    scanf("%d", &num);

    printf("Eu pensei no número %d e você pensou no número %d.", n_pc, num);
    printf("\n\n");
}