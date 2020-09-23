#include <stdio.h>

void main(){

    int dia;

    printf("***** EXERCICIO 08 *****\n\n");
    printf("INFORME UM NUMERO ENTRE 1 E 7 REFERENTE A UM DIA: ");
    scanf("%d", &dia);

    if (dia < 1 || dia > 7) {
        printf("NOMERO INVALIDO, PROGRAMA SERA FINALIZADO !!!");
        return;
    }

    switch (dia)
    {
    case 1:
        printf("1 - DOMINGO");
        break;
    case 2:
        printf("2 - SEGUNDA");
        break;
    case 3:
        printf("3 - TERCA");
        break;
    case 4:
        printf("4 - QUARTA");
        break;
    case 5:
        printf("5 - QUINTA");
        break;
    case 6:
        printf("6 - SEXTA");
        break;
    case 7:
        printf("7 - SABADO");
        break;
    default:
        break;
    }

    return;

}