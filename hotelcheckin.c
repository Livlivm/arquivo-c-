//Biblioteca
#include <stdio.h>

int totalquartos = 10;
int quartos[10]; 

    // Para inicializar os quartos
    int inicializarquartos() {
    int i;
    for (i = 0; i < totalquartos; i++) {
    quartos[i] = 0;
    }
    return 0;
}

// Para reservar um quarto
int reservarquarto() {
    int numero;
    printf("Digite o número do quarto para reservar (1-%d): ", totalquartos);
    scanf("%d", &numero);

    if (numero < 1 || numero > totalquartos)
    {
    printf("Quarto inválido!\n");
    } 
    else if (quartos[numero - 1] == 1) 
    {
    printf("Quarto já está reservado!\n");
    } 
    else 
    {
    quartos[numero - 1] = 1;
    printf("Reserva realizada para o quarto %d!\n", numero);
    }

    return 0;
}

// Para cancelar uma reserva
int cancelarreserva() {
    int numero;
    printf("Digite o número do quarto para cancelamento: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > totalquartos)
    {
    printf("Quarto inválido!\n");
    } 
    else if (quartos[numero - 1] == 0)
    {
    printf("Quarto não está reservado!\n");
    } 
    else
    {
    quartos[numero - 1] = 0;
    printf("Reserva do quarto %d foi cancelada!\n", numero);
    }

    return 0;
}

// Para exibir o estado dos quartos
int mostrarquartos() {
    int i;
    printf("Estado dos Quartos:\n");
    for (i = 0; i < totalquartos; i++) {
        printf("Quarto %d - %s\n", i + 1, quartos[i] ? "Reservado" : "Disponível");
    }
    return 0;
}

// Para função principal
int main() {
    int opcao;
    inicializarquartos();

    do {
        printf("Sistema de Reservas do Hotel\n");
        printf("1. Reservar Quarto\n 2. Cancelar Reserva\n 3. Exibir Quartos\n 4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                reservarquarto();
                break;
            case 2:
                cancelarreserva();
                break;
            case 3:
                mostrarquartos();
                break;
            case 4:
                printf("Saindo... Até logo!\n");
                return 0;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (1);

    return 0;
}




