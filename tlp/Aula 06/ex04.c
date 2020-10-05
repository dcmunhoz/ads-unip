#include <stdio.h>

void main(){

    float quantidade = 0, 
          totalPares = 0, 
          totalGeral = 0,
          mediaPares = 0, 
          mediaGeral = 0; 

    int valor = 0,
        quantidadePares = 0, 
        quantidadeImpares = 0;

    while (valor >= 0)
    {

        printf("INSIRA UM VALOR: ");
        scanf("%d", &valor);
        
        if (valor >= 0) {
            quantidade++;
            totalGeral = totalGeral + valor;
            
            if (valor % 2 == 0) {
                quantidadePares++;
                totalPares = totalPares + valor;
            } else {
                quantidadeImpares++;
            }
        }

    }

    mediaPares = totalPares / quantidadePares;
    mediaGeral = totalGeral / quantidade;
    
    printf("QUANTIDADE NUMEROS PARES: %d\n", quantidadePares);
    printf("QUANTIDADE NUMEROS IMPARES: %d\n", quantidadeImpares);
    printf("MEDIA VALORES PARES: %2.f\n", mediaPares);
    printf("MEDIA VALORES GERAL: %2.f\n", mediaGeral);



}