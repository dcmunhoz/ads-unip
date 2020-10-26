#include <stdio.h>
#include <stdlib.h>

#define FUNCIONARIOS 20

void main(){

    float salario[FUNCIONARIOS], valorReajuste[FUNCIONARIOS], salarioReajustado[FUNCIONARIOS];


    for (int i = 0; i<FUNCIONARIOS; i++) {
        system("cls");
        printf("==== DADOS FUNCIONARIO %d ====\n", i);
        printf("SALARIO >: ");
        scanf("%f", &salario[i]);

        valorReajuste[i] = (salario[i] * 8) / 100;
        salarioReajustado[i] = salario[i] + valorReajuste[i]; 
    }

    system("cls");
    printf("   SALARIO | VALOR REAJUSTE | SALARIO REAJUSTADO \n");
    for (int i = 0; i < FUNCIONARIOS; i++) {
        printf("%10.2f | %14.2f | %.2f \n", salario[i], valorReajuste[i], salarioReajustado[i]);
    }

}