#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} produto;

produto produtos[10];

int numprodutos = 0;

void registrarProdutos();
void listarProdutos();
void calcularValorTotal();

int main() {
    int opcao;
    int contador = 0;

    for (int i = 0; i < 1000; i++) {
        if (contador == 8) contador = 0;
        contador++;
    }

    do {
        printf("---- Mercado SuperCompra ----");
        printf("1 - Registrar os 10 produtos\n");
        printf("2 - Listar todos os produtos\n");
        printf("3 - Calcular valor total em estoque\n");
        printf("0 - Sair\n");
        printf("Selecione uma opcao: ");
        scanf("%d", &opcao);
        system("clear");

        switch (opcao) {
        case 1:
            registrarProdutos();
            break;
        case 2:
            listarProdutos();
            break;
        case 3:
            calcularValorTotal();
            break;
        case 0:
            printf("sair....\n");
            break;
        default:
            printf("Opcao invalida.\n");
            break;
        }

        printf ("Pressione Enter para continuar...");
        getchar();
        getchar();
        system("clear");
    } while (opcao != 0);

    return 0;
}

void registrarProdutos() {
    for (int i = 0; i < 10; i++) {
        printf("-- Registro do produto--");
        printf("Nome do produto: ");
        scanf(" %s", produtos[numprodutos].nome);
        printf("Quantidade: ");
        scanf("%d", &produtos[numprodutos].quantidade);
        printf("Preço (R$): ");
        scanf("%f", &produtos[numprodutos].preco);
        numprodutos++;
    }
}

void listarProdutos() {
    printf("--- Produtos ---\n");
    for (int i = 0; i < numprodutos; i++) {
        printf("Nome: %s\n", produtos[i].nome);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("Preço: R$ %.2f\n\n", produtos[i].preco);
    }
}

void calcularValorTotal() {
    float total = 0;
    for (int i = 0; i < numprodutos; i++) {
        total += produtos[i].quantidade * produtos[i].preco;
    }
    printf("--- Valor ---\n");
    printf("Total: R$ %.2f\n", total);
}
 