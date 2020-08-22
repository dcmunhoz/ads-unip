/**
 * UNIP Analise e Desenvolvimento de sistemas
 * N5562D1; Daniel Costa Munhoz; DS2P18
 * 
 * Exercicio 7 - PROGRAMA INVERSOR – O USUÁRIO DIGITA 4 NÚMEROS SEPARADAMENTE E O PROGRAMA MOSTRA OS NÚMEROS NA ORDEM INVERSA. EX: DIGITOU: 1 2 3 4  MOSTRA: 4 3 2 1 
 *  
 */

#include <stdio.h>

void main(){

    printf("======== Exercicio 07 - Inversor ========\n\n");

    // Variáveis
    int a, b, c, d;

    // Captura de valores
    printf("Insira o primeiro numero: ");
    scanf("%d", &a);
    printf("Insira o segundo numero: ");
    scanf("%d", &b);
    printf("Insira o terceiro numero: ");
    scanf("%d", &c);
    printf("Insira o quarto numero: ");
    scanf("%d", &d);

    printf("-------------------------------------------\n");
    printf("Sequencia invertida: %d, %d, %d, %d", d,c,b,a);



}