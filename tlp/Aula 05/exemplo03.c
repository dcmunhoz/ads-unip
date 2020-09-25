#include <stdio.h>


void main () {

    int resultado = 0, contador = 1;
    float media = 0;

    for (contador; contador <= 100; contador++){

        resultado += contador;

    }

    media = resultado / contador;

    printf("MEDIA: %2.f", media);

}