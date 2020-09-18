#include <stdio.h>

void main(){

    float altura, peso, imc;

    printf("***** CALCULADORA IMC *****\n");
    printf("DIGITE SUA ALTURA: ");
    scanf("%f", &altura);

    printf("DIGITE SEU PESO: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("ABAIXO DO PESO");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("PESO NORMAL");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("SOBREPESO");
    } else if (imc >= 30 && imc <= 34.9) {
        printf("OBSEIDADE GRAU 1");
    } else if (imc >= 35 && imc <= 39.9) {
        printf("OBESIDADE GRAU 2");
    } else if (imc >= 40){
        printf("OBESIDADE GRAU 3");
    }

}