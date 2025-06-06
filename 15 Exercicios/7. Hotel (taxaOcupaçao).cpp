#include <stdio.h>
#include <stdlib.h>

int main(){
    int quartos;
    float ocupaçao = 0, taxaOcupacao;
    
    for(int i=0;i<10;i++){
        printf("quarto %d ocupado? (1 = Ocupado) (0 = Desocupado): ", i+ 1);
        scanf("%d", &quartos);
        
        if(quartos == 1){
            ocupaçao ++;
        }
    }
    
    taxaOcupacao = (ocupaçao/10) * 100;
    printf("taxa de ocupaçao: %.2f", taxaOcupacao);

return 0;
}