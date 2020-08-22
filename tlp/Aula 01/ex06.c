/**
 * UNIP Analise e Desenvolvimento de sistemas
 * N5562D1; Daniel Costa Munhoz; DS2P18
 * 
 * Exercicio 6 - PROGRAMA QUADRADO – O usuário digita um número e o programa retorna o quadrado deste número (o número multiplicado por ele mesmo).
 *  
 */

#include <stdio.h>

void main(){

    printf("======== Exercicio 06 - Quadrado do numero ========\n\n");


    // Variáveis
    int valor, resultado;

    // Captura de valores
    printf("Digite o valor calular seu quadrado: ");
    scanf("%d", &valor);

    printf("-------------------------------------------\n");
    resultado = valor * valor;

    // Exibir resultados
    printf("O quadrado de %d e: %d", valor, resultado);

}