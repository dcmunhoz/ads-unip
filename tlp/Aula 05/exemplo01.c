#include <stdio.h>

int main(){

    printf("Forma 8:");
    for (char letra = 'Z'; letra >= 'A'; letra--) {
        printf(" %c", letra);
    }

    return 0;
}