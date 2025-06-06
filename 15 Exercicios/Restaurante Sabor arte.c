#include <stdio.h>

int main() {
    int pratos, opcao;
    int sobremesa, bebida;
    float total, desconto, final;
    do {
        printf("--- Menu ---\n");
        printf("1 - Prato principal (R$150,00)\n");
        printf("2 - Sobremesa (R$50,00)\n");
        printf("3 - Bebida (R$20,00)\n");
        printf("0 - Sair\n");
        printf("Escolha o pedido: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Informe quantidade de pratos principais: ");
                int pratos;
                scanf("%d", &pratos);
                total += pratos * 150;
                break;
            case 2:
                printf("Informe quantidade de sobremesas: ");
                int sobremesa;
                scanf("%d", &sobremesa);
                total += sobremesa * 50;
                break;
            case 3:
                printf("Informe quantidade de bebidas: ");
                int bebida;
                scanf("%d", &bebida);
                total += bebida * 20;
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção Inválida :( \n");
                break;
        }
    } while (opcao != 0);

    if (pratos > 3) {
        desconto += total * 0.10;
    }

    if (sobremesa > 0 && bebida > 0) {
        desconto += total * 0.05;
    }

    final = total - desconto;

    printf("\n--- RESUMO DA CONTA ---\n");
    printf("Total sem desconto: R$%.2f\n", total);
    printf("Desconto aplicado: R$%.2f\n", desconto);
    printf("Valor final a pagar: R$%.2f\n", final);

    return 0;
}
