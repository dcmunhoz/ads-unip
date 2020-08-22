/**
 * UNIP Analise e Desenvolvimento de sistemas
 * N5562D1; Daniel Costa Munhoz; DS2P18
 * 
 * Exercicio 9 - PROGRAMA CÁLCULOS – O usuário informa quatro valores. O programa mostra o resultado da multiplicação do primeiro pelo terceiro e o resultado da soma do segundo com o quarto.
 *  
 */

#include <stdio.h>

void main(){

    printf("======== Exercicio 09 - Calculos ========\n\n");
    
    int a, b, c, d;

    printf("Informe 4 valores em sequencia, separados por espaco: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    printf("-------------------------------------------\n");
    printf("Multiplicacao do primeiro pelo terceiro: %d \n", a*c );
    printf("Soma do segundo com o quarto: %d \n", b+d );

}