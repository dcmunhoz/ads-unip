#include <stdio.h>

void main(){

    // int media = 7;

    // if (media >= 6) {
    //     printf("aprovado");
    // } else {
    //     printf("reprovado");
    // }

    // Exercicio Condicionais

    // 1
    // float notaTrabalho    = 0,
    //       notaAvaliacao   = 0,
    //       mediaAritmetica = 0,
    //       mediaPonderada  = 0;

    // printf("Insira a nota do trabalho e da avaliacao respectivamente: ");
    // scanf("%f", &notaTrabalho );
    // scanf("%f", &notaAvaliacao );

    // mediaAritmetica = (notaTrabalho + notaAvaliacao) / 2;
    // mediaPonderada = ((notaTrabalho * 4) + (notaAvaliacao * 6)) / (4 + 6);

    // printf("Media aritmetica: %.2f\n", mediaAritmetica);
    // printf("Media ponderada : %.2f\n", mediaPonderada);

    // if (mediaAritmetica >= 7) {
    //     printf("Aluno aprovado !");
    // } else {
    //     printf("Aluno em recuperação");
    // }

    // 2
    // int a, b;
    // printf("Insira dois valores em sequencia: ");
    // scanf("%d", &a);
    // scanf("%d", &b);

    // if (a > b) {
    //     printf("%d e maior que %d", a, b);
    // } else {
    //     printf("%d e maior que %d", b, a);
    // }

    // 3
    // int notaAluno;
    // printf("Informe a nota do aluno: ");
    // scanf("%d", &notaAluno);

    // if (notaAluno >= 0 && notaAluno <= 4) {
    //     printf("Deficitario");
    // } else if (notaAluno > 4 && notaAluno <= 6) {
    //     printf("Regular");
    // } else if (notaAluno > 6 && notaAluno <= 8) {
    //     printf("Bom");
    // } else if (notaAluno > 8 ) {
    //     printf("Fluente");
    // }

    // 4
    int a, b, c;
    printf("Informe os lados A, B e C de um triangulo respectivamente: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a == b && a == c && b == c) {

        printf("Triângulo equilatero");

    } else if (a == b || a == c || b == c) {
        printf("Triangulo isoceles");
    } else if (a != b && a != c && b != c) {
        printf("Triangulo escaleno");
    }




}