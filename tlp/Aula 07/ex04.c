#include <stdio.h>
#include <stdlib.h>

#define TAM 8

void main(){

    int nums[TAM], contador, multiplo = 0;

    srand(time(0));

    for(int i = 0; i < TAM; i++){
        nums[i] = rand() % 50;
    }

    for ( int i = 0; i < TAM; i++)
    {
        contador = 0;
        multiplo = 0;
        printf("%2d | ", nums[i]);

        while (6*contador <= nums[i])
        {


            if (6 * contador == nums[i]) {
                multiplo = 1;
            }

            contador++;
        }
        
        if (multiplo == 1) {
            printf("EH MULTIPLO\n");
        } else {
            printf("NAO EH MULTIPLO\n");
        }

    }
    

}