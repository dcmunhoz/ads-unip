#include <stdio.h>

void main(){

    int altura,
        maiorAltura = 0,
        menorAltura = 999;

    for (int i = 1; i<= 15; i++) {
        printf("INTORME A ALTURA DA PESSOA %d: ", i);
        scanf("%d", &altura);

        if (altura >= maiorAltura ) {
            maiorAltura = altura;
        }

        if (altura <= menorAltura) {
            menorAltura = altura;
        }
    }

    printf("MAIOR ALTURA: %d\n", maiorAltura);
    printf("MENOR ALTURA: %d\n", menorAltura);

}