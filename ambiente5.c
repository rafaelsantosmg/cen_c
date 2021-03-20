#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main() {
    srand(time(NULL));
    int num = rand() % 10; //Gera um número de 0 a 9.
    int num2 = rand() % 10 + 1; //Gera um número de 1 a 10.
    printf("Eu gerei o numero (%d) e (%d)", num, num2);
    printf("\n\n");
}