void exercicio7() {
    printf("Exercício 7\n\n");

    int num = 0, resultado = 1;

    printf("Informe um número: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++) {
        resultado = resultado * (num - i);
    }

    printf("\n%d! = %d", num, resultado);
}
