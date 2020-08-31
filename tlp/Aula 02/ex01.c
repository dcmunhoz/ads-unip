#include <stdio.h>

void main(){

    float custoFabrica            = 0,
          porcentagemImposto      = 0,
          porcentagemDistribuidor = 0,
          valorImposto            = 0,
          valorDistribuidor       = 0,
          custoFinal              = 0;


    printf("###################################\n");
    printf("      CALCULADORA DE CUSTOS\n");
    printf("###################################\n\n");

    printf("INFORME O CUSTO DE FABRICA DO VEICULO                  : ");
    scanf("%f", &custoFabrica);
    printf("INFORME A PORCENTAGEM DE IMPOSTO SOBRE O VEICULO       : ");
    scanf("%f", &porcentagemImposto);
    printf("INFORME A PORCENTAGEM DE LUCRO DO DISTRIBUIDOR VEICULO : ");
    scanf("%f", &porcentagemDistribuidor);

    valorImposto      = (custoFabrica * porcentagemImposto) / 100;
    valorDistribuidor = (custoFabrica * porcentagemDistribuidor) / 100;
    custoFinal = custoFabrica + valorImposto + valorDistribuidor;

    printf("\n%.f%% DA DISTRIBUIDORA : R$%.2f", porcentagemDistribuidor, valorDistribuidor );
    printf("\n%.f%% DE IMPOSTOS NO VEICULO : R$%.2f", porcentagemImposto, valorImposto );
    printf("\nVALOR FINAL DO VEICULO ------: R$%.2f", custoFinal);

}