void exercicio5() {
    printf("Exercício 5\n\n");

    float nums[10], soma = 0, media = 0;

    for(int i = 0; i < 10; i++) {
        printf("Informe a idade %d: ", i+1);
        scanf("%f", &nums[i]);
    }

    for(int i = 0; i < 10; i++) {
        soma += nums[i];
    }

    printf("A média é %2.f", soma/10);
}
