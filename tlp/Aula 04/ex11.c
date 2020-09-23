#include <stdio.h>

void main(){

    int ladoA, ladoB, ladoC;

    printf("***** EXERCICIO 11 *****\n\n");
    printf("INFORME O LADO A: ");
    scanf("%d", &ladoA);

    printf("INFORME O LADO B: ");
    scanf("%d", &ladoB);

    printf("INFORME O LADO C: ");
    scanf("%d", &ladoC);

    if (ladoA <= 0 || ladoB <= 0 || ladoC <= 0) {

        printf("UM DOS LADOS E INVALIDO, PROGRAMA SERA FINALIZADO !!!");
        return;

    }

    if (ladoA == ladoB && ladoB == ladoC) {

        printf("O TRIANGULO E EQUILATERO !!");

    } else if (ladoA == ladoB || ladoB == ladoC || ladoA == ladoC) {

        printf("O TRIANGULO E ISOCELES !!");

    } else {
        printf("O TRIANGULO E ESCALENO !!");
    }

}