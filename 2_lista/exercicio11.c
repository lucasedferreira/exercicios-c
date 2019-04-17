void exercicio11() {
    printf("Exercício 11\n\n");

    int quant_vidas = 3, vidas = quant_vidas, acertou_letra = 0, acertou_tudo = 0;
    char palavra[10], acertou[10], tentativa[quant_vidas], escolha;

    printf("Digite uma palavra de no máximo 10 letras: ");
    scanf("%s", palavra); 

    while(vidas >= 0) {
        system("@cls||clear");

        printf("Vidas: %d\n", vidas);

        printf("Tentativas: ");
        for(int i = quant_vidas; i != 0 ; i--) {
            if(tentativa[i] != '\0'){
                printf("%c - ", tentativa[i]);
            }
        }
        printf("\n\n");

        acertou_tudo = 1;
        for(int i = 0; i < 10; i++) {
            if(palavra[i] != '\0'){
                if(acertou[i] == 1) {
                    printf("%c ", palavra[i]);
                }else{
                    printf("_ ");
                    acertou_tudo = 0;
                }
            }
        }

        if(vidas == 0) {
            printf("\nVocê perdeu :(");
            break;
        }

        if(acertou_tudo == 1) {
            printf("\nVocê venceu!");
            break;
        }

        printf("\n\n");

        printf("Qual sua tentativa?\n");
        scanf("%s", &escolha);

        acertou_letra = 0;
        for(int i = 0; i < 10; i++) {
            if(palavra[i] == escolha) {
                acertou[i] = 1;
                acertou_letra = 1;
            }
        }

        if(acertou_letra != 1){
            vidas--;
            tentativa[vidas] = escolha;
        }
    }
}
