#include <stdio.h>

void main(){

    int somaPares = 0, somaTres = 0;

    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 == 0) {
            somaPares += i;
        }

        if (i % 3 == 0) {
            somaTres += i;
        }
    }

    printf("SOMA DOS NUMEROS PARES: %d \n", somaPares);
    printf("SOMA DOS NUMEROS DIVISIVEIS POR TRES: %d \n", somaTres);
    

}