#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){

    int nota = 0, 
        totalNotas = 0, 
        totalAluno = 0, 
        lancarNota,
        menorNota = 10,
        maiorNota = 0;
    float mediaNotas = 0.0;


    do {
        totalAluno++;
        printf("NOTA DO ALUNO %d: ", totalAluno);
        scanf("%d", &nota);
        totalNotas += nota;
        printf("DESEJA LANCAR OUTRA NOTA? (1 - SIM, 2 - NAO) ");
        scanf("%d", &lancarNota);

        if (nota >= maiorNota) {
            maiorNota = nota;
        }

        if (nota <= menorNota) {
            menorNota = nota;
        }

    }while(lancarNota != 2);

    mediaNotas = totalNotas / totalAluno;

    printf("TOTAL DE ALUNOS: %d \n", totalAluno);
    printf("SOMA DAS NOTAS: %d \n", totalNotas);
    printf("MEDIA DA SALA: %2.f \n", mediaNotas);
    printf("MAIOR NOTA: %d \n", maiorNota);
    printf("MENOR NOTA: %d \n", menorNota);

    system("pause");
}