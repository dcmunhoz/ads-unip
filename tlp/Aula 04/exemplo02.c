#include <stdio.h>

void main(){
    
    float a, b, resultado;
    char operacao;
    
    printf("Insira 2 valores em sequencia: ");
    scanf("%f", &a);
    scanf("%f", &b);

    printf("Qual operacao voce deseja fazer? \n");
    printf("A - ADICAO\n");
    printf("S - SUBTRACAO\n");
    printf("D - DIVISAO\n");
    printf("M - MULTIPLICACAO\n");

    printf("Resposta: ");
    scanf("%s", &operacao);

    // if (operacao == 'A'){
    //     resultado = a + b;
    // } else if (operacao == 'S') {
    //     resultado = a - b;
    // } else if (operacao == 'D') {
    //     resultado = a / b;
    // } else if (operacao == 'M') {
    //     resultado = a * b;
    // } else {
    //     printf("Opção não disponivel!!! Leia as instruções");
    //     return;
    // }

    switch (operacao){
    case 'A':
        resultado = a + b;
        break;
    case 'S':
        resultado = a - b;
        break;
    case 'D':
        resultado = a / b;
        break;
    case 'M':
        resultado = a * b;
        break;
    default:
        printf("Operacao nao disponivel !!! Leia as instrucoes");
        return;
    }

    printf("O resultado da operação é %f", resultado);

}