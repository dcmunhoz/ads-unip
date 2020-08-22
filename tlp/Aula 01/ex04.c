/**
 * UNIP Analise e Desenvolvimento de sistemas
 * N5562D1; Daniel Costa Munhoz; DS2P18
 * 
 * Exercicio 4 - Escreva um programa para ler um valor (do teclado) e escrever (na tela) o seu antecessor e sucessor.
 *  
 */

#include <stdio.h>

void main(){

    printf("======== Exercicio 04 - Antecessor e Sucessor ========\n\n");

    // Variáveis
    int valor;

    // Capturar os dados
    printf("Insira um valor: ");
    scanf("%d", &valor);

    printf("Seu antecessor: %d\n", valor - 1 );
    printf("Seu sucessor: %d\n", valor + 1 );

}