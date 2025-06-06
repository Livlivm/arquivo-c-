#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota, media, soma = 0;
    int i;

    for (i = 0; i < 7; i++) {
        printf("Cliente %d: Informe sua nota para o estabelecimento (0 - 7): ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / 7;
    printf("\nMedia das notas: %.2f\n", media);

    if (media >= 6) {
        printf("Avaliação: Atendimento bom.\n");
    } else if (media >= 4) {
        printf("Avaliação: Atendimento razoavel.\n");
    } else {
        printf("Avaliação: Atendimento ruim.\n");
    }

    return 0;
}
