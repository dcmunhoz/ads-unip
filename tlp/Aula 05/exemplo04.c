#include <stdio.h>

void main(){

    int valorInicial, valorFinal;
    printf("DIGITE O VALOR INICIAL: ");
    scanf("%d", &valorInicial);

    printf("DIGITE O VALOR FINAL: ");
    scanf("%d", &valorFinal);

    printf("SEQUENCIA: ");
    for(int i = valorInicial; i <= valorFinal; i++){
        printf("%d ", i);
    }

}