#include <stdio.h>

void main(){

    int mes;

    printf("***** EXERCICIO 09 *****\n\n");
    printf("INFORME UM NUMERO ENTRE 1 E 12 REFERENTE A UM MES: ");
    scanf("%d", &mes);

    if (mes < 1 || mes > 12) {
        printf("NOMERO INVALIDO, PROGRAMA SERA FINALIZADO !!!");
        return;
    }

    switch (mes)
    {
    case 1:
        printf("1 - JANEIRO");
        break;
    case 2:
        printf("2 - FEVEREIRO");
        break;
    case 3:
        printf("3 - MARCO");
        break;
    case 4:
        printf("4 - ABRIL");
        break;
    case 5:
        printf("5 - MAIO");
        break;
    case 6:
        printf("6 - JUNHO");
        break;
    case 7:
        printf("7 - JULHO");
        break;
    case 8:
        printf("8 - AGOSTO");
        break;
    case 9:
        printf("9 - SETEMBRO");
        break;
    case 10:
        printf("10 - OUTUBRO");
        break;
    case 11:
        printf("11 - NOVEMBRO");
        break;
    case 12:
        printf("12 - DEZEMBRO");
        break;
    default:
        break;
    }

    return;

}