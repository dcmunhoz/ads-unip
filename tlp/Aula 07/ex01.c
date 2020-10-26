#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 15

void main(){

    int nums[TAMANHO], escolha, posicao, encontrou = 0;


    srand(time(0));

    printf("QUAL NUMERO DESEJA PROCURAR ? >: ");
    scanf("%d", &escolha);

    printf("\nNUMEROS NO ARRAY: \n");
    for (int i = 0; i < TAMANHO; i++) {
        nums[i] = rand() % 50;
        printf("%d | ", nums[i]);
    }

    for (int i = 0; i < TAMANHO; i++) {
        if (nums[i] == escolha) {
            encontrou = 1;
            posicao = i;
        } 
    }

    if (encontrou) {

        printf("\n\nENCONTRADO NA POSICAO %d", posicao);

    } else {
        
        printf("\n\nNUMERO NAO ENCONTRADO");
         
    }
    



    


}