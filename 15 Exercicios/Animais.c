#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char tipo[30];
    int idade;
    char nome[30];
} Animal;

Animal animais[6];

void cadastrarAnimais();
void exibirAnimaisCincoAnos();

int main() {
    cadastrarAnimais();
    exibirAnimaisCincoAnos();
    return 0;
}

void cadastrarAnimais() {
    printf("--== Cadastro de Animais ==--\n");
    for (int i = 0; i < 6; i++) {
        printf("Tipo: ");
        scanf("%29s", animais[i].tipo);
        printf("Idade: ");
        scanf("%d", &animais[i].idade);
        printf("Nome: ");
        scanf("%29s", animais[i].nome);
        printf("-----------------------------\n");
    }
}

void exibirAnimaisCincoAnos() {
    printf("\n--== Animais com mais de 5 anos ==--\n");
    for (int i = 0; i < 6; i++) {
        if (animais[i].idade > 5) {
            printf("Nome: %s\n", animais[i].nome);
        }
    }
}