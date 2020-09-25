#include <stdio.h>

void main(){

    int numero = 0,
        resultado = 1;

    printf("INFORME UM NUMERO: ");
    scanf("%d", &numero);

    for(int i = numero; i >= 1; i-- ){
        resultado = resultado * i; 
    }

    
    printf("O FATORIAL DE %d E: %d", numero, resultado);



}