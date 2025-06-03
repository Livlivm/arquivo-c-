#include <stdio.h>
#include <stdlib.h>

#include "alunos.h"
#include "notas.h"

void cadastrarNota(Nota *nota, int *conta){
    printf("Cadastrar Nota\n");
    printf("Informe a matricula do aluno :");
    scanf("%d", &nota->matricula);
    printf("Informa a nota :");
    scanf("%f", &nota->nota);
    *conta = *conta +1;
}
   