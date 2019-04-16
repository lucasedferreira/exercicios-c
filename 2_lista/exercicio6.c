void exercicio6() {
    printf("Exercício 6\n\n");

    int num_pessoas = 15, mais_alta = 0, mais_baixa = 0;
    float nums[5], soma = 0;

    for(int i = 0; i < 5; i++) {
        printf("Informe a altura %d: ", i);
        scanf("%f", &nums[i]);
    }

    for(int i = 0; i < 5; i++) {

        if(nums[i] > nums[mais_alta]) {
            mais_alta = i;
        }

        if(nums[i] < nums[mais_baixa]) {
            mais_baixa = i;
        }

        soma = soma + nums[i];
    }

    printf("\nA mais alta é %.2f", nums[mais_alta]);
    printf("\nA mais baixa é %.2f", nums[mais_baixa]);
    printf("\nA soma é %.2f", soma);
    printf("\nA média é %.2f", soma/5);
}
