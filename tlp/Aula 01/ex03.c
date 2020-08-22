/**
 * UNIP Analise e Desenvolvimento de sistemas
 * N5562D1; Daniel Costa Munhoz; DS2P18
 * 
 * Exercicio 3 - Receba do usuário dois números inteiros e imprima na tela a média;
 *  
 */

#include <stdio.h>

void main(){

    printf("======== Exercicio 03 - Média ========\n\n");

    // Variáveis
    float a, b, resultado;

    // Capturar os dados
    printf("Insira o primeiro valor: ");
    scanf("%f", &a);
    printf("Insira o segundo valor: ");
    scanf("%f", &b);

    resultado = (a+b) / 2 ;

    printf("A media entres os dois valores e: %.2f\n", resultado );

}