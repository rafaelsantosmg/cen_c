#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX002 - Especiais >>>");
    printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n \\a\t=\tBeep");
    printf("\n \\n\t=\tNova Linha");
    printf("\n \\t\t=\tTabulação");
    printf("\n \\\\\t=\tBarra");
    printf("\n %%%%\t=\tPorcentagem");
    printf("\n \\\?\t=\tInterrogação");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}
