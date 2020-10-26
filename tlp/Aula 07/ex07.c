#include <stdlib.h>
#include <stdio.h>

#define MERCADORIAS 100

void main(){

    float valorCompra[MERCADORIAS], valorVenda[MERCADORIAS], porcentagemLucro;
    int  cat1 = 0, cat2 = 0, cat3 = 0;


    for (int i = 0; i<MERCADORIAS; i++) {
        system("cls");
        printf("==== DADOS MERCADORIA %d ==== \n", i);
        printf("VALOR DE COMPRA :> ");
        scanf("%f", &valorCompra[i]);

        printf("VALOR DE VENDA :> ");
        scanf("%f", &valorVenda[i]);

        porcentagemLucro = ((valorVenda[i] - valorCompra[i]) / valorCompra[i]) * 100;

        if (porcentagemLucro < 10) {
            cat1++;
        } else if (porcentagemLucro >= 10 && porcentagemLucro <= 20) {
            cat2++;
        } else {
            cat3++;
        }
    }

    scanf("cls");

    printf("LUCRO MENOR QUE 10%c    : %d\n", 37, cat1);
    printf("LUCRO ENTRE 10%c e 20%c  : %d\n", 37, 37,  cat2);
    printf("LUCRO MAIOR QUE 20%c    : %d\n", 37, cat3);

}