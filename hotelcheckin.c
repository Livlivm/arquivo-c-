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


//CODIGO NOVO

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para guardar os dados do cliente
typedef struct {
    char nome[50];
    int quarto;
    int dataReserva;
    float valor;
    int adicional; // 1 - Levar comida | 2 - Limpar quarto
} Cadastro;

Cadastro cadastros[50]; // Lista com até 50 cadastros
int totalCadastros = 0; // Conta quantos clientes foram cadastrados

// Funções
void cadastrarCliente();
void buscarQuartos();
void cancelarReserva();
void finalizarfuncao();

int main() {
    int opcao;

    do {
        printf("\n--== Sistema reserva da Rainha Livia ==--\n");
        printf("1 - Cadastrar cliente\n");
        printf("2 - Buscar quartos\n");
        printf("3 - Cancelar reserva\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                cadastrarCliente();
                break;
            case 2:
                buscarQuartos();
                break;
            case 3:
                cancelarReserva();
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }

    } while(opcao != 0);

    return 0;
}


// Cadastrar um novo cliente
void cadastrarCliente() {
    printf("\n--== Cadastrar novo cliente ==--\n");

    if (totalCadastros >= 50) {
        printf("Limite de cadastros atingido.\n");
        return;
    }

    printf("Nome do cliente: ");
    scanf(" %[^\n]", cadastros[totalCadastros].nome);

    printf("Número do quarto: ");
    scanf("%d", &cadastros[totalCadastros].quarto);

    printf("Data da reserva: ");
    scanf("%d", &cadastros[totalCadastros].dataReserva);

    printf("Valor da reserva R$: ");
    scanf("%f", &cadastros[totalCadastros].valor);

    printf("Adicional (1 - Levar comida | 2 - Limpar quarto): ");
    scanf("%d", &cadastros[totalCadastros].adicional);
  
    totalCadastros++; // Conta mais um cliente
    printf("Cliente cadastrado com sucesso!\n");
    
    finalizarfuncao();
}

// Mostrar os dados de um cliente
void buscarQuartos() {
    printf("\n--== Quartos Cadastrados ==--\n");

    char nomeBusca[50];
    printf("Digite nome do cadastrado: ");
    scanf(" %[^\n]", nomeBusca);

    if (totalCadastros == 0) {
        printf("Nenhum cadastro encontrado.\n");
        finalizarfuncao();
        return;
    }

    int encontrado = 0;
    for (int i = 0; i < totalCadastros; i++) {
        if (strcmp(cadastros[i].nome, nomeBusca) == 0) {
            printf("\nCliente %d:\n", i + 1);
            printf("Nome: %s\n", cadastros[i].nome);
            printf("Quarto: %d\n", cadastros[i].quarto);
            printf("Data da reserva: %d\n", cadastros[i].dataReserva);
            printf("Valor: R$ %.2f\n", cadastros[i].valor);
            printf("Adicional: %s\n", cadastros[i].adicional == 1 ? "Levar comida" : "Limpar quarto");
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Cliente não encontrado.\n");
    }

    finalizarfuncao();
}

// Cancelar uma reserva
void cancelarReserva() {
    printf("\n--== Cancelar Reserva ==--\n");

    char nome[50];
    printf("Digite o nome do cliente para cancelar: ");
    scanf(" %[^\n]", nome);

    int encontrado = 0;
    for (int i = 0; i < totalCadastros; i++) {
        if (strcmp(cadastros[i].nome, nome) == 0) {
            encontrado = 1;

            // Remover cliente da lista
            for (int contador = i; contador < totalCadastros - 1; contador++) {
                cadastros[contador] = cadastros[contador + 1];
            }

            totalCadastros--;
            printf("Reserva de %s cancelada com sucesso!\n", nome);
            break;
        }
    }

    if (!encontrado) {
        printf("Cliente não encontrado ;(\n");
    }

    finalizarfuncao();
}

// Pausar até o usuário apertar Enter
void finalizarfuncao() {
    printf("\nPressione Enter para continuar...");
    getchar(); // consome o Enter anterior
    getchar(); // espera o novo Enter

}





