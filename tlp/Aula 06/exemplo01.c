#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){

    setlocale(LC_ALL, "Portuguese_Brasil");

    for (int i = 0; i<= 10; i++) {
        printf("%d ", i);
    }

    printf("\n repetição while \n");
    int contador = 0;

    while (contador <= 10)
    {
        printf("%d ", contador);
        contador++;
    }

    
    printf("\n repetição do while \n");

    int valor = 0;
    do {
        printf("adivinhe o numero: ");
        scanf("%d", &valor);
    } while (valor != 10);
    
    
    system("pause");

}