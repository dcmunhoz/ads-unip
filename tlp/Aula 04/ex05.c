#include <stdio.h>

void main(){

    float salario, parcela;

    printf("***** EXERCICIO 05 *****\n\n");
    printf("INFORMA O VALOR DO SALARIO: ");
    scanf("%f", &salario);
    
    printf("INFORMA O VALOR DA PRESTACAO DO EMPRESTIMO: ");
    scanf("%f", &parcela);
    
    
    if (parcela > salario * 0.2) {

        printf("EMPRESTIMO NAO CONSEDIDO");
        return;

    } else {

        printf("EMPRESTIMO CONSEDIDO");
        return;

    }
}   