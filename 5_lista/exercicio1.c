void exercicio1() {
    int numero = 0;

    numero = lerInt("Informe um número: ");

    char *nome_arquivo = "tabuada.txt";
    FILE *arquivo;
    arquivo = fopen(nome_arquivo, "w");

    for(int i = 0; i <= 9; i++)
        fprintf(arquivo, "%d\n", numero * i);

    fclose(arquivo);
}
