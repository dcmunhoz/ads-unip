#include <stdio.h>

void main(){

    float n1 = 0,
          n2 = 0,
          n3 = 0,
          mediaFinal = 0;

    printf("###################################\n");
    printf("          MEDIA PONDERADA\n");
    printf("###################################\n\n");

    printf("INFORME A N1, N2 E N3 EM SEQUENCIA: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    mediaFinal = ((n1 * 2) + (n2 * 3 ) + (n3 * 5)) / 10; 

    printf("\nA MEDIA FINAL DO ALUNE E: %.2f", mediaFinal);

}