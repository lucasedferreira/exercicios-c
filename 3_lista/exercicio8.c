#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

typedef struct 
{ 
    int codigo;
    char nome[100], descricao[100];
    float valor, qntd;
} produto;

void lerString(char msg[], char* salvar, int tamanho) {
    printf("%s", msg);

    fgets(salvar, tamanho, stdin);

    //Remove o caractere \n da string
    strtok(salvar, "\n");
}

int lerInt(char msg[]) {
    char dado[10000];
    lerString(msg, dado, 10000);
    int valor = atoi(dado);
    return valor;
}

float lerFloat(char msg[]) {
    char dado[10000];
    lerString(msg, dado, 10000);
    float valor = atof(dado);
    return valor;
}

produto perguntaDadosProduto() {
    produto p1;

    p1.codigo = lerInt("Informe o Código: ");
    lerString("Informe o nome: ", p1.nome, 100);
    lerString("Informe a descrição: ", p1.descricao, 100);
    p1.valor = lerFloat("Informe o Valor Unitário: ");
    p1.qntd = lerFloat("Informe a Quantidade: ");

    return p1;
}

void mostraDadosProduto(produto p1) {
    printf("Código: %d\n", p1.codigo);
    printf("Nome: %s\n", p1.nome);
    printf("Descrição: %s\n", p1.descricao);
    printf("Valor Unitário: %.2f\n", p1.valor);
    printf("Quantidade em Estoque: %.2f\n", p1.qntd);
}

void mostraProdutos(produto produtos[], int tamanho) {
    printf("======== PRODUTOS =========\n\n");
    int i = 0;

    for(i = 0; i < tamanho; i++) {
        produto c1 = produtos[i];
        mostraDadosProduto(c1);
        printf("----------------------\n");
    }

    getchar();
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int quantidade = 10;
    produto produtos[quantidade];

    int opcao = -1;

    int indiceProduto = 0;

    do{
        printf("1 - Cadastrar Produto\n");
        printf("2 - Listar Produtos (%d cadastrados)\n", indiceProduto);
        printf("0 - Sair\n");

        opcao = lerInt("Informe a opção: ");

        system("@cls||clear");

        switch (opcao)
        {
        case 0: break;
        case 1:
            produtos[indiceProduto] = perguntaDadosProduto();
            indiceProduto++;
            break;
        
        case 2: mostraProdutos(produtos, indiceProduto);
            break;
        
        default:
            printf("Opção inválida\n");
            break;
        }
    }while(opcao != 0);
}