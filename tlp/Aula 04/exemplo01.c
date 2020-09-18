#include <stdio.h>

void main(){
    
    int numero = 0;

    printf("Digite um valor: ");
    scanf("%d", &numero);

    if (numero % 2 != 1) {
        printf("Numero %d eh par", numero);
    } else {
        
        printf("Numero %d eh impar", numero);
    }

}