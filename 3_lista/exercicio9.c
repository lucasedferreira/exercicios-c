void exercicio9() {
    printf("Exercício 9\n\n");

    int ano = 0;
    float populacao = 7600000000; // População atual

    printf("Informe o ano: ");
    scanf("%d", &ano);

    printf("\nAno > População");

    for(int i = 0; i <= 75; i++) {

        printf("\n%d > %.2f", ano + i, populacao);

        populacao = populacao * 1.012;

    }
}
