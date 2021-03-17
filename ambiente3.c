#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[] = "Rafael";
    char *sobrenome = "Santos";
    char sexo = 'M';
    unsigned int idade = 35;
    float peso = 87.8;

    printf("Prazer sou %s %s, sou do sexo %c, tenho %d anos e peso %.1fKg", nome, sobrenome, sexo, idade, peso);
    printf("\n\n");
}
