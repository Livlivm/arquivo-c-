#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float n;
    char produto[20];
} Produto;

int main(){
    Produto produto[10];
    int i, posição, posiçao2;
    float maior = 0;
    float menor = 0;
    
    for (i = 0; i < 10; i ++){
        printf ("Informe o nome do produto: ");
        scanf ("%s", produto[i].produto);
        printf("Informe o valor do %d produto: ", i + 1);
        scanf("%f", &produto[i].n);
    }
   
    system ("clear");
    for (i = 0; i < 10; i++){
        if (produto[i].n > maior){
                maior = produto[i].n;
                posição = i+1;
            }
            
        if (produto[i].n > menor){
                menor = produto[i].n;
            
            }
    }

    printf("O maior valor informado é: %.2f do produto %d\n", maior, posição);
    printf("O menor valor informado é: %.2f", menor);
    return 0;
}