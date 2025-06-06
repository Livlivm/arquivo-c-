#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    int quant;

    do {
        printf("---- Locadora Vídeo Boom ----\n");
        printf("Informe a quantidade de filmes (até 5): ");
        scanf("%d", &quant);
    } while (quant > 1 && quant < 5);

    return 0;
}
