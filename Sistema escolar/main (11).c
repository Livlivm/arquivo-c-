//Biblioteca

#include <stdio.h>
#include <stdlib.h>
#include "alunos.h"
#include "notas.h"
#include "media.h"     

int main() {
    Aluno alunos[10];
    Nota notas[50];
    int contAluno = 0, contNota = 0;
    int opcao;
    
    do {
    printf("Sistema Escolar\n");
    printf("1 - Cadastrar Aluno\n");
    printf("2 - Cadastrar Nota\n");
    printf("3 - Calcular Media\n");
    printf("0 - Sair\n");
    printf("Selecione uma opçao:");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
        cadastrarAluno(&alunos[contAluno], &contAluno);
        contAluno++;
        break;
        
        case 2: 
        cadastrarNota(&notas[contNota], &contNota);
        break;
        
        case 3:
        calcularMedia(alunos, notas);
        break;
        
        case 0: 
        break;
        
        default:
        break;
    }
        }while(opcao != 0);
    
    return 0;
}




