#include <stdio.h>

void main(){

    float n1, n2, result;

    printf("***** EXERCICIO 04 *****\n\n");
    printf("INSIRA O VALOR DA N1: ");
    scanf("%f", &n1);
    printf("INSIRA O VALOR DA N2: ");
    scanf("%f", &n2);

    if (n1 < 0 || n1 > 10) {
        printf("VALOR INFORMADO PARA N1 INVALIDO !!! O PROGRAMA SERA ENCERRADO");
        return;
    } else if (n2 < 0 || n2 > 10) {
        printf("VALOR INFORMADO PARA N1 INVALIDO !!! O PROGRAMA SERA ENCERRADO");
        return;
    }

    result = (n1 + n2) / 2;
    printf("RESULTADO DA MEDIA: %.f", result);

    return;
}