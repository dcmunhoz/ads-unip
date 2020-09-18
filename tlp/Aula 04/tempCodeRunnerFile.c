    if (escolha == 'A'){
        resultado = a + b;
    } else if (escolha == 'S') {
        resultado = a - b;
    } else if (escolha == 'D') {
        resultado = a / b;
    } else if (escolha == 'M') {
        resultado = a * b;
    } else {
        printf("Opção não disponivel!!! Leia as instruções");
        return;
    }

    printf("O resultado da operação é %f", resultado);