#include <stdio.h>

void main(){

    float lerValor = 1,
        valor = 0,
        mediaValores = 0,
        totalValores = 0,
        qtdeValores = 0,
        qtdePositivos = 0,
        qtdeNegativos = 0,
        porcentagemNegativos = 0,
        porcentagemPositivos = 0;

    while (lerValor != 0)
    {
        printf("DESEJA LER UM VALOR? (1 - SIM  0 - NAO): ");
        scanf("%f", &lerValor);

        if (lerValor != 0) {
            printf("INFORME O VALOR: ");
            scanf("%f", &valor);

            totalValores += valor;

            if (valor > 0) {
                qtdePositivos++;
            } else {
                qtdeNegativos++;
            }

            qtdeValores++;
        }
    }

    mediaValores = totalValores / qtdeValores;
    porcentagemPositivos = (qtdePositivos / qtdeValores)  * 100;
    porcentagemNegativos = (qtdeNegativos / qtdeValores)  * 100;


    printf("TOTAL: %.f\n", qtdeValores );
    printf("MEDIA: %.f\n", mediaValores);
    printf("VALORES POSITIVOS: %.f\n", qtdePositivos);
    printf("VALORES NEGATIVOS: %.f\n", qtdeNegativos);
    printf("PORCENTAGEM POSITIVOS: %.f\n", porcentagemPositivos);
    printf("PORCENTAGEM NEGATIVOS: %.f\n", porcentagemNegativos);

    

}