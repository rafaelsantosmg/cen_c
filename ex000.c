#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese_Brasil");
    printf("Olá, Mundo!");
    printf("\nUfa! Já estou \"LIVRE\" da \"Maldição\".");
    printf("\n\n");
}