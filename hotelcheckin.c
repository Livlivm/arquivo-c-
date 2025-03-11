//Biblioteca
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");
    int opçao;
    printf("Selecione (1-3):\n");
    scanf("%d", &opçao);
   
    switch(opçao) {
        case 1:
        printf("Você escolheu checkin:\n");
        break;
        
        case 2:
        printf("Você escolheu servico de quarto:\n");
        break;
        
        case 3:
        printf("Você escolheu  fazer pedido:\n");
        break;
       

    }
        return 0;
}