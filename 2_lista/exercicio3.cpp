void exercicio3() {
    printf("Exerc�cio 3\n\n");

    int num = 0;

    printf("Informe o n�mero: ");
    scanf("%d", &num);

	printf("\nA tabuada de %d de 0 a 9 �:\n", num);
    for(int i = 0; i <= 9; i++){
    	printf("\n%d", i * num);
	}
}
