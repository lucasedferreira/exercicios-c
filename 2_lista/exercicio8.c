void exercicio8() {
    printf("Exercício 8\n\n");

    int tamanho = 0;

    printf("Informe o tamanho do triângulo: ");
    scanf("%d", &tamanho);

    printf("\nA)\n");

    for(int i = 0; i < tamanho; i++) { // coluna
        
        for(int j = 0; j <= i; j++){
            printf("*");
        }

        for(int k = 0; k <= i; k++) { // linha
            printf(" ");
        }

        printf("\n");
    }

    printf("\n\nB)\n");

    for(int i = 0; i < tamanho; i++) { // coluna
        
        for(int j = i; j < tamanho; j++){
            printf("*");
        }

        for(int k = i; k < tamanho; k++) { // linha
            printf(" ");
        }

        printf("\n");
    }

    printf("\n\nC)\n");

    for(int i = 0; i < tamanho; i++) { // coluna
        
        for(int j = 0; j <= i; j++){
            printf(" ");
        }

        for(int k = i; k < tamanho; k++) { // linha
            printf("*");
        }

        printf("\n");
    }

    printf("\n\nD)\n");

    for(int i = 0; i < tamanho; i++) { // coluna
        
        for(int j = i; j < tamanho; j++){
            printf(" ");
        }

        for(int k = 0; k <= i; k++) { // linha
            printf("*");
        }

        printf("\n");
    }
}
