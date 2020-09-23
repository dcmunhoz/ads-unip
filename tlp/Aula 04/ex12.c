#include <stdio.h>

void main(){

    int op;
    float num1, num2, result;

    printf("***** EXERCICIO 12 *****\n\n");
    printf("ESCOLHA UMA OPCAO: \n");
    printf("1 - SOMA DE 2 NUMEROS. \n");
    printf("2 - DIFERENCA ENTRE 2 NUMEROS. \n");
    printf("3 - PRODUTO ENTRE 2 NUMEROS. \n");
    printf("4 - DIVISAO ENTRE 2 NUMEROS. \n");
    printf("ESCOLHA UMA DAS OPCOES: ");
    scanf("%d", &op);

    if (op < 1 || op > 4) {
        printf("OPCAO SELECIONADA INVALIDA, PROGRAMA SERA ENCERRADO !!");
        return;
    }

    printf("INFORME O PRIMEIRO NUMERO: ");
    scanf("%f", &num1);

    printf("INFORME1 O SEGUNDO NUMERO: ");
    scanf("%f", &num2);

    switch (op) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            
            if (num1 > num2){
                result = num1 - num2;
            } else {
                result = num2 - num1;
            }

            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            
            if (num2 == 0) {
                printf("O DENOMINADOR NAO PODE SER ZERO, O PROGRAMA VAI SER ENCERRADO !!!");
                return;
            }

            result = num1 / num2;

            break;
        default:
            break;
    }

    printf("O RESULTADO DA OPERACAO E: %.f", result);

}