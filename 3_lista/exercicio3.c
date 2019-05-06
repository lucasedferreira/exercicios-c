void exercicio3() {
    printf("Exercício 3\n\n");

    float consumo = 0, valor_final;
    int tipo = 0;

    printf("Informe o consumo: ");
    scanf("%f", &consumo);

    printf("\nInforme o tipo de consumidor: ");
    printf("\n1 - Residencial");
    printf("\n2 - Comercial");
    printf("\n3 - Industrial\n");
    scanf("%d", &tipo);

	switch(tipo) {
        case 1:
            valor_final = 5 + (0.05 * consumo);
        break;
        case 2:
            valor_final = 500;
            if(consumo > 80)
                valor_final += 0.25 * consumo;
        break;
        case 3:
            valor_final = 800;
            if(consumo > 100)
                valor_final += 0.04 * consumo;
        break;
        default:
            valor_final = 0;
    }

    printf("\nO valor a se pagar é %.2f", valor_final);
}
