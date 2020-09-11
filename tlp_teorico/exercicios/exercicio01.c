#include <stdio.h>

void main(){

    int diaNasc = 15, 
        mesNasc = 3, 
        anoNasc = 1997,
        dia = 25,
        mes = 1,
        ano = 2020,
        diasRestantes;

    // printf("Digite sua data de nascimento no formato DD MM YYYY: ");
    // scanf("%d", &diaNasc);
    // scanf("%d", &mesNasc);
    // scanf("%d", &anoNasc);
    
    // printf("Digite a data de HOJE no formato DD MM YYYY: ");
    // scanf("%d", &dia);
    // scanf("%d", &mes);
    // scanf("%d", &ano);

    // printf("%d %d %d", diaNasc, mesNasc, anoNasc);
    // printf("%d %d %d", dia, mes, ano);
    // return;
    int idade = ano - anoNasc;

    int diasAniversario = ((ano + 1) * 365 ) + (mesNasc * 30) - diaNasc;
    int diasAtual = (ano * 365) + (mes * 30) - dia;

    if (mesNasc >= mes && (mesNasc >= mes && diaNasc >= dia) ) {

        diasRestantes = diasAtual - diasAniversario;
        diasRestantes = diasRestantes + 365;

    } else {
        diasRestantes = diasAniversario - diasAtual;
        diasRestantes = 365 - diasRestantes;
        
    }

    printf("%d", diasRestantes);
    return;

    if (idade >= 18) {
        printf("Falta %d dias para seu aniversário", diasRestantes);
    } else {
        printf("Falta %d meses para seu aniversário", diasRestantes);
    }

}