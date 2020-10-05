#include <stdio.h>

void main(){


    int valor = 0,
        somaDivisores = 0,
        totalDivisores = 0;

    float mediaDivisores = 0.0;

    printf("INFORME UM NUMER INTEIRO: ");
    scanf("%d", &valor);

    int contador = valor;
    if (valor > 0) {

        printf("DIVISORES: ");
        while (contador > 0)
        {

            if (valor % contador == 0) {
                printf("%d ", contador);
                somaDivisores += contador;
                totalDivisores++;
            }
            

            contador--;
        }
        

    }else { 

        printf("DIVISORES: ");
        while (contador < 0)
        {

            if (valor % contador == 0) {
                printf("%d ", contador);
                somaDivisores += contador;
                totalDivisores++;
            }
            

            contador++;
        }

    }

    mediaDivisores = somaDivisores / totalDivisores;

    printf("\nSOMA DIVISORES: %d", somaDivisores);
    printf("\nTOTAL DIVISORES: %d", totalDivisores);
    printf("\nMEDIA DIVISORES: %2.f", mediaDivisores);

    
}