#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct departamento {
    int codigo;
    char descricao[30];
};

struct cargo {
    int codigo;
    char descricao[30];
    int carga_horaria;
};

struct funcionario {

    int codigo;
    char nome[50];
    float salario;
    Departamento departamento;
    Cargo cargo;

};

typedef struct funcionario Functionario;
typedef struct departamento Departamento;
typedef struct cargo Cargo;

#define NUMERO_FUNCIONARIOS 5

void main(){

    
    struct funcionario fun1[10];
    Functionario fun[NUMERO_FUNCIONARIOS];

    /* Exemplo de navegação struct */
    fun1[0].codigo = 1;
    fun1[0].departamento.codigo = 10;
    fun1[0].cargo.codigo = 50;
    fun1[0].cargo.carga_horaria = 40;

    for (int i = 0; i < NUMERO_FUNCIONARIOS; i++) {
        printf("####### INFORMACOES FUNCIONARIO %d ########\n", i);
        printf("Codigo>:", i);
        scanf("%d", &fun[i].codigo);

        printf("Nome>:", i);
        scanf("%s", &fun[i].nome);

        printf("Salario>:", i);
        scanf("%f", &fun[i].salario);

    }

    printf("\nCODIGO \tNOME \tSALARIO");
    

    for (int i = 0; i < 5; i++) {
        printf("\n%d \t%s \t%f", fun[i].codigo, fun[i].nome, fun[i].salario);

    }

}