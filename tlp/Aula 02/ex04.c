#include <stdio.h>

void main(){

    float temperatura = 0,
          kelvin      = 0,
          farenheit   = 0;

    printf("###################################\n");
    printf("       CONVERSOR TEMPERATURA\n");
    printf("###################################\n\n");

    printf("INFORME A TEMPERATURA EM CELSIUS: ");
    scanf("%f", &temperatura);

    kelvin = temperatura + 273.15;
    farenheit = (temperatura * 1.8) + 32;


    printf("\nTEMPERATURA EM CELSIUS   : %.2f", temperatura);
    printf("\nTEMPERATURA EM KELVIN    : %.2f", kelvin);
    printf("\nTEMPERATURA EM FARENHEIT : %.2f", farenheit);


}