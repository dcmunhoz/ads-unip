#include <stdio.h>

void main(){

    int valor = 0, 
        anterior = 0,
        atual = 0,
        proximo = 0;

    printf("DIGITE O VALOR FINAL DO FIBONACCI: ");
    scanf("%d", &valor);

    for (int i = 1; i <= valor; i++)
    {
        
        atual = proximo;
        proximo = atual + anterior;
        anterior = atual;

        if (anterior == 0) {
            proximo++;
        }

        printf("%d ", proximo);

    }
    

}