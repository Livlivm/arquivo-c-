#include <stdio.h>

int main() {
    int pratos, opcao;
    int sobremesa, bebida;
    int ingresso; 
    int pontos = 0; 
    float total, desconto, final;

    do {
        printf("--- CinePonto ---\n");
        printf("1 - Compra ingresso (2 pontos)\n");
        printf("2 - Quantidade de pontos\n");
        printf("0 - Sair\n");
        printf("Escolha o pedido: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
            int quantidade;
                printf("Informe quantidade de ingresso: ");
                scanf("%d",&quantidade);
                pontos += quantidade * 2; 
                break;

            case 2:
                printf("Quantidade de pontos: %d\n", pontos);
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção Inválida :( \n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
