#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ALUNOS 15

void main(){

    int n1[ALUNOS], n2[ALUNOS], media[ALUNOS];
    char situacao[ALUNOS][10];

    for (int i = 0; i < ALUNOS; i++) {
        system("cls");
        printf("\n===== INFORMACOES DO ALUNO %d =====\n", i);
        printf("NOTA 1>: ");
        scanf("%d", &n1[i]);
        printf("NOTA 2>: ");
        scanf("%d", &n2[i]);

        media[i] = (n1[i] + n2[i]) / 2;
        if (media[i] >= 6) {
            strcpy(situacao[i], "APROVADO\0");
        } else { 
            strcpy(situacao[i], "REPROVADO\0");
        }

    }
    
    system("cls");
    printf("NOTA 1 | NOTA 2 | MEDIA | SITUACAO\n");
    printf("------------------------------------\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("%6d | %6d | %5d | %s \n", n1[i], n2[i], media[i], situacao[i]);


    }




}