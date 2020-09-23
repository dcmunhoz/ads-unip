#include <stdio.h>

void main(){

    int a, b, diferenca;

    printf("***** EXERCICIO 03 *****\n\n");
    printf("INSIRA DOIS VALORES INTEIROS EM SEQUENCIA: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        diferenca = a - b;
        printf("%d EH MAIOR QUE %d E A DIFERENCA ENTRE ELES EH DE %d", a, b, diferenca);
    } else {
        diferenca = b - a;
        printf("%d EH MAIOR QUE %d E A DIFERENCA ENTRE ELES EH DE %d", b, a, diferenca);
    }

    return;
}