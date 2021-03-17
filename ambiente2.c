#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("O %s tem %d anos de idade", "Rafael", 35);
    printf("\nSeu peso atual é %.2fKg", 88.0);
    printf("\nO seu sexo é %c", 'M');
}
