#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAM 15

void main(){

    int nums[TAM] = { 5, 3, 5, 1, 5, 16, 1, 6, 47, 34, 124, 54, 2, 6, 7 };
    char parouimpar[] = "";

    printf("POS | NUM | RESULTADO \n");
    printf("--------------------- \n");
    for(int i = 0; i < TAM; i++){

        if (nums[i] % 2 == 1) {
            printf("%3d | %3d | %s \n", i, nums[i], "IMPAR");
        } else {
            printf("%3d | %3d | %s \n", i, nums[i], "PAR");
        }



    }

}