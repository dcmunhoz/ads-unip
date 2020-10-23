#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int somar(int a, int b, int c){
    int resultado = a + b + c;

    return resultado;
}

float media(int a, int b, int c){

    float resultado = ((float)a + (float)b + (float)c) / 3;

    return resultado;
}

void main() {

    int a, b, c; 
    float resultado;


    // float resultado;
    // float valor;

    // printf("Raiz quadrada de: ");
    // scanf("%f", &valor);

    // resultado = sqrt(valor);

    // printf("\nResultado: %f", resultado);

    // printf("\n\nPotencia: %f", pow(3, 4));

    printf("Calcular media de: ");
    scanf("%d %d %d", &a, &b, &c);

    resultado = media(a,b,c);

    printf("\nMedia>: %f", resultado);


}

/*

Como declarar uma função

tipoRetorno nomeFunção(tipoParametro parametro){
    codigo;
    retorno;
}

*/