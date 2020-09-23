#include <stdio.h>

void main(){

    int num;

    printf("***** EXERCICIO 10 *****\n\n");
    printf("INSIRA UM NUMERO: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("O NUMERO EH DIVISIVEL POR 3 E 5, PORTANTO EH INVALIDO !");
    } else if (num % 3 == 0) {
        printf("O NUMERO EH DIVISIVEL POR 3");
    } else if (num % 5 == 0) {
        printf("O NUMERO EH DIVISIVEL POR 5");
    }



    return;
}