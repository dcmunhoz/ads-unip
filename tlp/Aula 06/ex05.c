#include <stdio.h>

void main(){

    int valor = 0;

    printf("INSIRA UM VALOR PARA CALCULAR A TABUADA: ");
    scanf("%d", &valor);

    for (int i = 0; i <= 10; i++) {

        printf("%d X %d = %d\n", i, valor, i*valor);

    }

}