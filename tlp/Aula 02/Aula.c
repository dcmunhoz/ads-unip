#include <stdio.h>

void main(){


    // 1 - Operações Matematicas
    // float a = 0, b = 0;
    // printf("#########################################\n");
    // printf("              CALCULADORA\n");
    // printf("#########################################\n");
    // printf("INSIRA 2 NUMEROS RESPECTIVAMENTES:");
    // scanf("%f", &a);
    // scanf("%f", &b);

    // printf("\n\nRESULTADO DAS OPERACOES");
    // printf("%.f + %.f = %.f \n", a, b, a + b);
    // printf("%.f - %.f = %.f \n", a, b, a - b);
    // printf("%.f * %.f = %.f \n", a, b, a * b);
    // printf("%.f / %.f = %.2f \n", a, b, a / b);


    // 2 - Reajuste Salário
    // int salarioAtual = 0, 
    //     reajuste = 0, 
    //     salarioNovo = 0;

    // printf("####################################\n");
    // printf("        REAJUSTE SALARIAL\n");
    // printf("####################################\n\n");

    // printf("INFORME O VALOR DO SALARIO: ");
    // scanf("%d", &salarioAtual);
    // printf("INFORME O PERCENTUAL DO REAJUSTE: ");
    // scanf("%d", &reajuste);

    // salarioNovo = salarioAtual + (( salarioAtual * reajuste) / 100 );


    // printf("\n\nO SALARIO ANTIGO ERA: %d \n", salarioAtual);
    // printf("O REAJUSTE FOI DE: %d%% \n", reajuste);
    // printf("VALOR DO NOVO SALARIO: %d", salarioNovo);


    // 3 - CALCULO DE JUROS
    float valorEmprestimo = 0,
          juros = 0,
          tempo = 0,
          jurosFinal = 0,
          jurosMensal = 0,
          totalFinal = 0;

         

    printf("*********************************\n");
    printf("             JUROS\n");
    printf("*********************************\n");
    printf("INFORME O VALOR DO EMPRESTIMO DESEJADO: ");
    scanf("%f", &valorEmprestimo);
    printf("INFORME A PROCENTAGEM DO JUROS: ");
    scanf("%f", &juros);
    printf("INFORME O TEMPO DO EMPRESTIMO EM MESES: ");
    scanf("%f", &tempo);

    jurosFinal = (valorEmprestimo * juros * tempo) / 100;
    totalFinal = valorEmprestimo + jurosFinal;
    jurosMensal = totalFinal / tempo;

    printf("\n\n******** RESULTADO ******** \n");
    printf("TOTAL JUROS DO PERIODO %.2f \n", jurosFinal);
    printf("TOTAL A SER PAGO %.2f \n", totalFinal);
    printf("VALOR PRESTACAO MENSAL %.2f \n", jurosMensal);





}