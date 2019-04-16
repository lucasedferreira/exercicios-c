void exercicio10() {
    printf("Exercício 10\n\n");

    int num = (rand() % 100) + 1; // Gera um número aleatório entre 1 e 100
    int num_chances = 2, escolha = 0, diferenca = 0;

    for(int i = 0; i < num_chances; i++) {

        printf("Qual seu papite?\n");
        scanf("%d", &escolha);

        diferenca = num - escolha;
        if(diferenca >= 30) {
            printf("Gelado");
        }else if(diferenca >= 20) {
            printf("Frio");
        }else if(diferenca >= 10) {
            printf("Morno");
        }else if(diferenca >= 5) {
            printf("Quente");
        }else if(diferenca >= 1) {
            printf("Fervendo");
        }else{
            printf("\nACERTOU!");
            break;
        }

        printf("\n\n");
    }

    if(diferenca != 0) {
        printf("NÃO FOI DESSA VEZ :(");
    }
}
