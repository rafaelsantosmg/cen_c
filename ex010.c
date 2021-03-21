#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    char prod[0];
    float preco, desc;

    printf("<<< EX010 - Preço do Produto >>>\n");
    printf("\nProduto: ");
    gets(prod);
    printf("Preço de %s", prod);
    printf("Desconto (%%): ");
    
}