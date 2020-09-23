#include <stdio.h>

void main(){

    char sexo;
    float altura = 0, result = 0;

    printf("***** EXERCICIO 06 *****\n\n");
    printf("INFORME SEU SEXO (M OU F): ");
    scanf("%s", &sexo);

    printf("INFORME SUA ALTURA(M): ");
    scanf("%f", &altura);

    if (sexo == 'M') {
        
        result = (72.7 * altura) - 58;

    }  else if (sexo == 'F') {
        result = (62.1 * altura) - 44.7;
    }

    printf("SEU PESO IDEAL EH %.f", result);

    return;
}