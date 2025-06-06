#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct {
    char produto[20];
    int codigo;
    float preco;
} Produto;

int main() {
    int i;
    Produto produto[5];

    for (i = 0; i < 5; i++) {
        printf("Informe o %d produto:\n", i + 1);
        scanf("%19s", produto[i].produto); 
        printf("Informe o código do produto:\n");
        scanf("%d", &produto[i].codigo);
        printf("Informe o valor do produto:\n");
        scanf("%f", &produto[i].preco);
    }
    
    system ("clear");
    printf("Produtos com preço maior que R$ 10,00:\n");
    for (i = 0; i < 5; i++) {
        if (produto[i].preco > 10) {
            printf("Produto: %s\nCódigo: %d\nPreço: %.2f\n", produto[i].produto, produto[i].codigo, produto[i].preco);
            printf("----------------\n");
        }
    }

    return 0;
}
