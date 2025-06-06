#include <stdio.h>
#include <stdlib.h>

int main() {
    int id, idade, peso;
    char nome[50];

    printf("Informe o nome: ");
    scanf("%s", nome);

    printf("Informe a idade: ");
    scanf("%d", &idade);

    printf("Informe o ID: ");
    scanf("%d", &id);

    printf("Informe o peso (em kg): ");
    scanf("%d", &peso);

    if (peso >= 30) {
        printf("Você está obeso.\n");
    } else if (peso >= 25) {
        printf("Você está com sobrepeso.\n");
    } else {
        printf("Você está saudável.\n");
    }

    return 0;
}





