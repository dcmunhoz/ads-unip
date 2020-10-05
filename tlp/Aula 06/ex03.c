#include <stdio.h>

void main(){

    int valor = 0,
        g1 = 0, g2 = 0, g3 = 0, g4 = 0;

    while (valor >= 0)
    {
        
        printf("INSIRA UM VALOR: ");
        scanf("%d", &valor);

        if (valor >= 0 && valor <= 25) {
            g1++;
        } else if (valor >= 26 && valor <= 50){
            g2++;
        } else if (valor >= 51 && valor <= 75){
            g3++;
        } else if (valor >= 76 && valor <= 100){
            g4++;
        }

    }
    

    printf("0 ate 25: %d\n", g1);
    printf("26 ate 50: %d\n", g2);
    printf("51 ate 75: %d\n", g3);
    printf("76 ate 100: %d\n", g4);


}