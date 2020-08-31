#include <stdio.h>

void main(){

    int anos    = 0,
        meses   = 0,
        dias    = 0,
        horas   = 0,
        minutos = 0;

    printf("###################################\n");
    printf("         CONVERSOR TEMPO\n");
    printf("###################################\n\n");

    printf("INFORME UM VALOR INTEIRO CORRESPONDENTE A ANOS: ");
    scanf("%d", &anos);

    meses = anos * 12;
    dias = anos * 365;
    horas = dias * 24;
    minutos = horas * 60;

    printf("\n");
    printf("%d ANOS TEM %d MESES \n", anos, meses);
    printf("%d ANOS TEM %d DIAS \n", anos, dias);
    printf("%d ANOS TEM %d HORAS \n", anos, horas);
    printf("%d ANOS TEM %d MINUTOS \n", anos, minutos);


}