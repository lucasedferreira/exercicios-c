#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "exercicio1.cpp"
#include "exercicio2.cpp"
#include "exercicio3.cpp"
#include "exercicio4.cpp"
// #include "exercicio5.c"
// #include "exercicio6.c"
// #include "exercicio7.c"
// #include "exercicio8.c"
// #include "exercicio9.c"
// #include "exercicio10.c"
// #include "exercicio11.c"

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
    
        default:
            printf("Opção inválida");
            break;
    }
}
