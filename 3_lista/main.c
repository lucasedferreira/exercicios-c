// Lucas Eduardo Batista Ferreira

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "strings.h"

#include "exercicio1.c"
#include "exercicio2.c"
#include "exercicio3.c"
#include "exercicio4.c"
#include "exercicio5.c"
#include "exercicio6.c"
#include "exercicio7.c"
#include "exercicio8.c"
#include "exercicio9.c"
#include "exercicio10.c"
#include "exercicio11.c"

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

void mostraMenu() {
    printf("Informe o exercício:\n");
    printf("1 - Exercício 1\n");
    printf("2 - Exercício 2\n");
    printf("3 - Exercício 3\n");
    printf("4 - Exercício 4\n");
    printf("5 - Exercício 5\n");
    printf("6 - Exercício 6\n");
    printf("7 - Exercício 7\n");
    printf("8 - Exercício 8\n");
    printf("9 - Exercício 9\n");
    printf("10 - Exercício 10\n");
    printf("11 - Exercício 11\n");
    printf("\nEscolha: ");
}

int main() {
    //Configura a acentuação no C
    setlocale(LC_ALL, "Portuguese");

    system("@cls||clear");

    mostraMenu();

    int opcao = 0;
    scanf("%d", &opcao);

    system("@cls||clear");

    switch (opcao)
    {
        case 1:
            exercicio1();
            break;
            
        case 2:
            exercicio2();
            break;
            
        case 3:
            exercicio3();
            break;

        case 4:
            exercicio4();
            break;

        case 5:
            exercicio5();
            break;
        
        case 6:
            exercicio6();
            break;

        case 7:
            exercicio7();
            break;

        case 8:
            exercicio8();
            break;

        case 9:
            exercicio9();
            break;

        case 10:
            exercicio10();
            break;

        case 11:
            exercicio11();
            break;

        default:
            printf("Opção inválida");
            break;
    }

    printf("\n\n");
}
