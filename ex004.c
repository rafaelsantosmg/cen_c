#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    
    char nome1[20], nome2[20], nome3[20], sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;

    printf("<<< EX004 - Listagem Pessoas >>>\n");
    printf("\nCadastrar primeira pessoa: \n");
    fflush(stdin);
    printf("NOME: ");
    fgets(nome1, 30, stdin);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo1 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota1);

    printf("Cadastrar segunda pessoa: \n");
    fflush(stdin);
    printf("NOME: ");
    fgets(nome2, 30, stdin);
    printf("SEXO [M/F] ");
    sexo2 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota2);

    printf("Cadastrar terceira pessoa: \n");
    fflush(stdin);
    printf("NOME: ");
    fgets(nome3, 30, stdin);
    printf("SEXO [M/F]: ");
    sexo3 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota3);

    int quebra1 = strcspn(nome1, "\n");
    nome1[quebra1] = '\0';
    int quebra2 = strcspn(nome2, "\n");
    nome2[quebra2] = '\0';
    int quebra3 = strcspn(nome3, "\n");
    nome3[quebra3] = '\0';

    printf("\nListagem Completa.");
    printf("\n------------------------------------");
    printf("\nNOME\t\tSEXO\tNOTA");
    printf("\n%-15s %-5c\t%.1f", nome1, sexo1, nota1);
    printf("\n%-15s %-5c\t%.1f", nome2, sexo2, nota2);
    printf("\n%-15s %-5c\t%.1f", nome3, sexo3, nota3);
    printf("\n------------------------------------");
    printf("\n\n");
}