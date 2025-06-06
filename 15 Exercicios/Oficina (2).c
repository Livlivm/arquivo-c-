#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char marca[30];
    int ano;
    float km;
} carro;

carro carros[5];

int numcarros = 0;

void registrarCarros();
void listarCarros();
void listarCarrosAcima100();

int main() {
    int opcao;
    int contador = 0;

    for (int i = 0; i < 1000; i++) {
        if (contador == 8) contador = 0;
        contador++;
    }

    do {
        printf("--- AutoCheck ---\n");
        printf("1 - Registrar os 5 carros\n");
        printf("2 - Listar todos os carros\n");
        printf("3 - Listar carros com mais de 100 mil km\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        system("clear");

        switch (opcao) {
        case 1:
            registrarCarros();
            break;
        case 2:
            listarCarros();
            break;
        case 3:
            listarCarrosAcima100();
            break;
        case 0:
            printf("sair...");
            break;
        default:
            printf("Opcao invalida.\n");
            break;
        }

        printf("Pressione Enter para continuar...");
        getchar();
        getchar();
        system("clear");

    } while (opcao != 0);

    return 0;
}

void registrarCarros() {
    for (int i = 0; i < 5; i++) {
        printf("-- Registro de carro --\n");
        printf("Marca: ");
        scanf("%s", carros[numcarros].marca);
        printf("Ano: ");
        scanf("%d", &carros[numcarros].ano);
        printf("Quilometragem: ");
        scanf("%f", &carros[numcarros].km);
        numcarros++;
    }
}

void listarCarros() {
    printf("--- Todos os carros registrados ---\n");
    for (int i = 0; i < numcarros; i++) {
        printf("Marca: %s\n", carros[i].marca);
        printf("Ano: %d\n", carros[i].ano);
        printf("Quilometragem:%.2f\n", carros[i].km);
    }
}

void listarCarrosAcima100() {
    printf("--- Carros  100 mil km---\n");
    int encontrou = 0;
    for (int i = 0; i < numcarros; i++) {
    if (carros[i].km > 100000) {
            printf("Marca: %s\n", carros[i].marca);
            printf("Ano: %d\n", carros[i].ano);
            printf("Quilometragem:carros[i].km");
            encontrou = 1;
        }
    }
if (!encontrou) {
    printf("Nenhum carro com mais de 100000 km encontrado.\n");
}
}
