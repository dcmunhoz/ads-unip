/**
 * UNIP Analise e Desenvolvimento de sistemas
 * N5562D1; Daniel Costa Munhoz; DS2P18
 * 
 * Exercicio 01 - Receba do usuário dois números inteiros e exiba:
 * - imprima na tela sua soma;
 * - imprima na tela sua subtração;
 * - imprima na tela sua multiplicação;
 * - imprima na tela sua divisão;
 *  
 */

#include <stdio.h>

void main(){
    printf("======== Exercicio 01 - Exibindo resultados ========\n\n");

    // Váriaveis
    int a, b, soma, sub, mult;
    float c, d, div;

    // Captura de dados
    printf("Insira o primeiro numero: ");
    scanf("%d", &a);

    printf("Insira o segundo numero: ");
    scanf("%d", &b);
    printf("-------------------------------------------\n");

    // Processamento dos dados

    soma = a + b;
    sub = a - b;
    mult = a * b;

    c = a;
    d = b;
    div = c / d;

    // Exibição dos resultados
    printf("O resultado da SOMA entre %d e %d: %d\n", a,b, soma);
    printf("O resultado da SUBTRACAO entre %d e %d: %d\n", a,b, sub);
    printf("O resultado da MULTIPLICACAOO entre %d e %d: %d\n", a,b, mult);
    printf("O resultado da DIVISAO entre %d e %d: %.2f\n", a,b, div);
}