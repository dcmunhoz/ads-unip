#include <stdio.h>

void main(){

    int valor = 0,
        somaValores = 0,
        quantidadeValores = 0,
        maiorValor = 0,
        menorValor = 0,
        somaPares = 0,
        quantidadePares = 0,
        quantidadeImpares = 0;
    
    float mediaValores = 0.0,
          mediaPares = 0.0,
          porcentagemImpares = 0.0;

    while( valor >= 0 ) {

        printf("INSIRA UM VALOR POSITIVO: ");
        scanf("%d", &valor);

        if (valor >= 0) {
            somaValores += valor;
            quantidadeValores++;


            if (valor >= maiorValor) {
                maiorValor = valor;
            }

            if (menorValor == 0 || valor <= menorValor ) {
                menorValor = valor;
            }

            if (valor % 2 == 0) {
                somaPares += valor;
                quantidadePares++;
            } else {
                quantidadeImpares++;
            }

        }

    }

    mediaValores = (float) somaValores / (float) quantidadeValores;
    mediaPares = (float) somaPares / (float) quantidadePares;
    porcentagemImpares = ((float) quantidadeImpares / (float) quantidadeValores) * 100;

    printf("-----------------------------------------------------------\n");
    printf("SOMA DOS VALORES: %d\n", somaValores);
    printf("QUANTIDADE DE VALORES DIGITADOS: %d\n", quantidadeValores);
    printf("MEDIA DOS VALORES DIGITADOS: %f\n", mediaValores);
    printf("MAIOR VALOR: %d\n", maiorValor);
    printf("MENOR VALOR: %d\n", menorValor);
    printf("MEDIA PARES: %f\n", mediaPares);
    printf("PORCENTAGEM IMPARES: %f", porcentagemImpares);

}