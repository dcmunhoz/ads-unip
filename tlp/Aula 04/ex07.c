#include <stdio.h>

void main(){

    float n1, n2, n3, media;

    printf("***** EXERCICIO 07 *****\n\n");
    printf("INFORME OS VALORES DA N1, N2 E N3 RESPECTIVAMENTE:  ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = ((n1 * 1) + (n2 * 1) + (n3 * 2)) / (1 + 1 + 2);

    printf("\nMEDIA FINAL: %.f \n", media);    

    if (media >= 60) {
        printf("O ALUNO FOI APROVADO!");
    } else {
        printf("O ALUNO FOI REPROVADO!");
    }


}