/**
 * UNIP Analise e Desenvolvimento de sistemas
 * N5562D1; Daniel Costa Munhoz; DS2P18
 * 
 * Exercicio 5 - Escreva um programa para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo.
 *  
 */

#include <stdio.h>

void main(){

    printf("======== Exercicio 05 - Area Retangulo ========\n\n");


    // Variáveis
    int largura, altura, resultado;

    // Captura de valores
    printf("Digite o valor para a LARGURA: ");
    scanf("%d", &largura);
    printf("Digite o valor para a ALTURA: ");
    scanf("%d", &altura);
    printf("-------------------------------------------\n");

    // Processamento dos dados
    resultado = largura*altura;

    // Exibir resultados
    printf("Area do retangulo: %d", resultado);

}