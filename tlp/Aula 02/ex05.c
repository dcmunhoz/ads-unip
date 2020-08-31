#include <stdio.h>

void main(){

    float valorReal    = 0,
          cotacaoDolar = 5.57,
          cotacaoEuro  = 6.58;

    printf("###################################\n");
    printf("         CONVERSOR MOEDAS\n");
    printf("###################################\n\n");

    printf("INFORME O VALOR EM R$ QUE DESEJA CONVERTER: ");
    scanf("%f", &valorReal);

    printf("\n\nCONVERSAO PARA DOLLAR : %.2f", (valorReal * cotacaoDolar));
    printf("\nCONVERSAO PARA EURO   : %.2f", (valorReal * cotacaoEuro));

}