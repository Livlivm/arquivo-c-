#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main (){
    int opçao;
    float total;
    int litros;
    printf ("---- Posto FuelMax ----\n");
    printf ("Escolha o tipo de combustível:\n");
    printf ("1. Gasolina R$8,00\n");
    printf ("2. Etanol R$ 7,00\n");
    printf ("3. Diesel R$ 9,00\n");
    printf ("0. Sair\n");
    scanf ("%d", &opçao);
    
    switch (opçao){
        case 1: 
        printf ("Informe quantos litros: ");
        scanf ("%d", &litros);
        total = litros * 8.00;
        printf ("Total: %.2f", total);
        break;
        
        case 2:
        printf ("Informe quantos litros: ");
        scanf ("%d", &litros);
        total = litros * 7.00;
        printf ("Total: %.2f", total);
        break;
        
        case 3:
        printf ("Informe quantos litros: ");
        scanf ("%d", &litros);
        total = litros * 9.00;
        printf ("Total: %.2f", total);
        break;
        
        case 0:
        printf ("Obrigado!");
        break;
        
        default:
        printf ("Opçao Invalida!");
        break;
    }
    return 0;
}