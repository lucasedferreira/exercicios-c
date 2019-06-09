void exercicio2() {
    char nome[20], conteudo[200];

    lerString("Informe o nome: ", nome, 20);
    lerString("Informe o conteúdo: ", conteudo, 100);

    FILE *arquivo;
    arquivo = fopen(nome, "w");
    fprintf(arquivo, conteudo);
    fclose(arquivo);
}
