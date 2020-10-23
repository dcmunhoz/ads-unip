#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario {

    int codigo;
    char nome[50];
    float salario;
    int departamento;
    int cargo;

};

typedef struct funcionario Functionario;

void main(){

    Functionario func1;
    Functionario func2;

    func1.codigo = 99;
    strcpy(func1.nome, "Daniel Munhoz");
    func1.salario = 1230.00;
    func1.cargo = 43;
    func1.departamento = 2;


    printf("Digite o codigo do funcionario: ");
    scanf("%d", &func2.codigo);

    printf("Digite o nome do funcionario: ");
    scanf("%s", &func2.nome);


    printf("\n********* Funcionario 1");
    printf("\nCodigo: %d", func1.codigo);
    printf("\nFunctionario: %s", func1.nome);

    printf("\n\n********* Funcionario 2");
    printf("\nCodigo: %d", func2.codigo);
    printf("\nFunctionario: %s", func2.nome);





}