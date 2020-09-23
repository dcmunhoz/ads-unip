#include <stdio.h>

void main(){

    int valor, result;

    printf("***** EXERCICIO 01 *****\n\n");
    printf("INSIRA UM VALOR NUMERICO: ");
    scanf("%d", &valor);

    if (valor >= 0) {
        result = valor * 2;
    } else {
        result = valor*valor*valor;
    }

    printf("O RESULTADO EH: %d", result);


    return;
}