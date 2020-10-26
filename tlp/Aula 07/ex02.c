#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void main(){

    char letras[TAM] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };

    for (int i = 0; i < TAM; i++) {

        printf("%d = %c\n", i, letras[i]);

    }

}