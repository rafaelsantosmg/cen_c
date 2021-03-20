#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
    setlocale(LC_ALL, "Portuguese_Brasil");

    char nome1[30], nome2[30], nome3[30];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;

    printf("<<<<<------ EX004 LISTAGEM ------>>>>>>\n");

    printf("Cadastrando a primeira pessoa.\n");
    printf("-------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome1);
    printf("SEXO [M/F]: ");
    sexo1 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota1);

    printf("Cadastrando a segunda pessoa.\n");
    printf("------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    gets(nome2); 
    printf("SEXO [M/F]: ");
    sexo2 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota2);

    printf("Cadastrando a terceira pessoa.\n");
    printf("-------------------------------\n");
    fflush(stdin);
    printf("NOME: ");
    gets(nome3);
    printf("SEXO [M/F]: ");
    sexo3 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota3);

    printf("\nListagem Completa.");
    printf("\n------------------------------------");
    printf("\nNOME\t\t\tSEXO\tNOTA");
    printf("\n%s\t\t%c\t%.1f", nome1, sexo1, nota1);
    printf("\n%s\t\t%c\t%.1f", nome2, sexo2, nota2);
    printf("\n%s\t\t%c\t%.1f", nome3, sexo3, nota3);
    printf("\n------------------------------------");
    printf("\n\n");
}