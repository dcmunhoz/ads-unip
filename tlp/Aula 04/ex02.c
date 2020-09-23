#include <stdio.h>

void main(){

    int value, result;

    printf("***** EXERCICIO 02 *****\n\n");
    printf("INSIRA UM VALOR NUMERICO: ");
    scanf("%d", &value);

    if (value % 2 == 0) {
        result = value * 10;
    } else {
        result = value / 2;
    }

    printf("O RESULTADO E: %d", result);

    return;
}