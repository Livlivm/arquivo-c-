#include <stdio.h>

int main() {
    int i;
    float n1, n2, n3, n4, notafinal;
    char nome;

    for (i = 0; i < 5; i++) {
        printf ("--Língua Viva --\n");
        printf("Aluno :");
        scanf ("%s", &nome);

        printf("Digite a nota 1: ");
        scanf("%f", &n1);

        printf("Digite a nota 2: ");
        scanf("%f", &n2);

        printf("Digite a nota 3: ");
        scanf("%f", &n3);

        printf("Digite a nota 4: ");
        scanf("%f", &n4);

        notafinal = (n1 + n2 + n3 + n4) / 4;

        printf("Média: %.2f\n", notafinal);

        if (notafinal >= 6) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}