#include <stdio.h>
#include <stdlib.h>

void main(){

    int diaNasc,
        mesNasc,
        anoNasc,
        dia,
        mes,
        ano,
        idade,
        diasRestantes,
        diasAniversario,
        diasAtual;

     printf("Digite sua data de nascimento no formato DD MM YYYY: \n");
     scanf("%d", &diaNasc);
     scanf("%d", &mesNasc);
     scanf("%d", &anoNasc);

     printf("Digite a data de HOJE no formato DD MM YYYY: \n");
     scanf("%d", &dia);
     scanf("%d", &mes);
     scanf("%d", &ano);

    idade = (((ano * 365) + (mes * 30) + dia) - ((anoNasc * 365) + (mesNasc * 30) + diaNasc)) / 365;

    diasAniversario = (mesNasc * 30) - (30 - diaNasc);
    diasAtual = (mes * 30) - (30 - dia);
    diasRestantes = diasAniversario - diasAtual;

    if (diasRestantes < 0) {
        diasRestantes = diasRestantes + 365;
    }

    if (idade >= 18){
        printf("Faltam %d dias para seu aniversario", diasRestantes);
    } else {
        printf("Faltam %d meses para seu aniversario", diasRestantes / 30);
    }

}