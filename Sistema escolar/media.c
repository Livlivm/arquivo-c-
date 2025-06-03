 #include <stdio.h>
#include <stdlib.h>

#include "alunos.h"
#include "notas.h"
#include "media.h"
 
 
void calcularMedia(Aluno alunos[], Nota notas[]) {
int matricula, qntNotas = 0;
float media = 0;

    printf("Informe a matricula :");
    scanf("%d", &matricula);
    
    for(int i = 0; i< 0; i++){
    if (alunos[i].matricula == matricula) {
        printf("Nome: %s\n", alunos[i].nome);
        break;
    }
} 

    
    for (int i =0; i < 50; i++){
    if(notas[i].matricula == matricula){
    media += notas[i].nota;
    qntNotas++;
    }
    }
    printf("Media : %.2f\n", (media /qntNotas));
}
