/**
 * UNIP Analise e Desenvolvimento de sistemas
 * N5562D1; Daniel Costa Munhoz; DS2P18
 * 
 * Exercicio 8 - PROGRAMA QUADRADO 2.0 – O usuário informa três números inteiros, o programa soma esses três valores e depois mostra o quadrado do resultado obtido.
 *  
 */

#include <stdio.h>

void main(){

    printf("======== Exercicio 08 - Quadrado 2.0 ========\n\n");

    int a, b, c, soma, resultado;

    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
    printf("Informe o segundo valor: ");
    scanf("%d", &b);
    printf("Informe o terceiro valor: ");
    scanf("%d", &c);

    soma = a + b + c;

    resultado = soma * soma;

    printf("-------------------------------------------\n");
    printf("O quadrado da soma de %d, %d e %d e: %d", a, b, c, resultado);


}