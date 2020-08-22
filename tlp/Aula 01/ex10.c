/**
 * UNIP Analise e Desenvolvimento de sistemas
 * N5562D1; Daniel Costa Munhoz; DS2P18
 * 
 * Exercicio 10 - Faça um programa que leia a idade de uma pessoa
 * expressa em anos, meses e dias e escreva a idade dessa pessoa 
 * expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.
 *  
 */

#include <stdio.h>

void main(){

    printf("======== Exercicio 10 - Idade em dias ========\n\n");
    
    int anos      = 0, 
        meses     = 0, 
        dias      = 0, 
        resultado = 0;

    printf("Informe sequencialmente sua idade em ANOS, MESES e DIAS sequencialmente: ");
    scanf("%d", &anos);
    scanf("%d", &meses);
    scanf("%d", &dias);

    resultado += anos * 365;
    resultado += meses * 30;
    resultado += dias;

    printf("-------------------------------------------\n");
    printf("Voce tem %d dias de idade", resultado);

}