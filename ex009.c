#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    float not1, not2, media;
    char nome[20];

    printf("<<< EX009 - Média do aluno >>>\n");
    printf("\nNome do Aluno: ");
    gets(nome);
    printf("Nota 1: ");
    scanf("%f", &not1);
    printf("Nota 2: ");
    scanf("%f", &not2);
    media = (not1 + not2) / 2;
    printf("O aluno %s tirou notas %.1f e %.1f e ficou com média %.1f.", nome, not1, not2, media);
    printf("\n\n");
}