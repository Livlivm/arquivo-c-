#include <stdio.h>
#include <stdlib.h>

struct Livro {
    char nome[50];
    int ano;
};

int main() {
    struct Livro livros[8];

    for (int i = 0; i < 8; i++) {
        printf("------ Letras Vivas ------");
        
        printf("Informe o nome do livro:\n");
        scanf(" %[^\n]", livros[i].nome); 
        
        printf("Informe o ano de publicacao do livro:\n");
        scanf("%d", &livros[i].ano);
    }

    printf("\n--- Livros publicados antes do ano 2000 ---\n");

    for (int i = 0; i < 8; i++) {
        if (livros[i].ano < 2000) {
            printf("Nome: %s | Ano: %d\n", livros[i].nome, livros[i].ano);
        }
    }

    return 0;
}
