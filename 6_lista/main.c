// Lucas Eduardo Batista Ferreira

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "strings.h"
#include "utils.c"

void atualizaTabuleiro(int ** jogadas[3][3]) {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            printf("\njogadas[%d][%d] %d", i, j, jogadas[i][j]);
    printf("    1   2   3 \n");
    for(int i = 0; i < 3; i++) {
        printf("%d  ", i + 1);
        for(int j = 0; j < 3; j++) {
            printf("_");
            if(jogadas[i][j] == 1)
                printf("X");
            else if(jogadas[i][j] == 2)
                printf("O");
            else
                printf("_");
            if(j == 2)
                printf("_");
            else
                printf("_|");
        }
        printf("\n");
    }
}

void perguntaJogada(int *linha, int *coluna) {
    int repetir = 0;
    do{
        if(repetir)
            printf("\nPosição inválida! Por favor digite novamente\n");

        linha = lerInt("Informe a linha: ") - 1;
        coluna = lerInt("Informe a coluna: ") - 1;

        if(linha < 0 || linha > 2 || coluna < 0 || coluna > 2)
            repetir = 1;
        else repetir = 0;

    }while(repetir);
}

int main() {
    //Configura a acentuação no C
    setlocale(LC_ALL, "Portuguese");

    int linha = 0, coluna = 0, colunaX = 0, colunaO = 0, venceuX = 0, venceuO = 0, velha = 0;
    int jogadas[3][3] = {0,0,0,0,0,0,0,0,0,0};
    char turno = 'X';
    int continuar = 1;

    do {
        system("@cls||clear");
        
        velha = 0;
        printf("    1   2   3 \n");
        for(int i = 0; i < 3; i++) {
            printf("%d  ", i + 1);
            for(int j = 0; j < 3; j++) {
                printf("_");

                if(jogadas[i][j] == 1) {
                    printf("X");
                    colunaX++;
                }else if(jogadas[i][j] == 2) {
                    printf("O");
                    colunaO++;
                }else {
                    printf("_");
                    velha++;
                }

                if(j == 2) printf("_");
                else printf("_|");

                if(colunaX == 3)
                    venceuX = 1;
                if(colunaO == 3)
                    venceuO = 1;
            }
            colunaX = colunaO = 0;
            printf("\n");
        }

        if(jogadas[0][0] == jogadas[0][1] && jogadas[0][1] == jogadas[0][2])

        if(venceuX) {
            printf("\nX venceu!");
            continuar = 0;
        }else if(venceuO) {
            printf("\nO venceu!");
            continuar = 0;
        }else if(velha == 0) {
            printf("\nDeu velha...");
            continuar = 0;
        }else {
            printf("Vez do Jogador %c\n\n", turno);

            // perguntaJogada(linha, coluna);

            int repetir = 0;
            do{
                if(repetir)
                    printf("\nPosição inválida! Por favor digite novamente\n");

                linha = lerInt("Informe a linha: ") - 1;
                coluna = lerInt("Informe a coluna: ") - 1;

                if(linha < 0 || linha > 2 || coluna < 0 || coluna > 2)
                    repetir = 1;
                else repetir = 0;

            }while(repetir);

            jogadas[linha][coluna] = (turno == 'X' ? 1 : 2);
            turno = (turno == 'X' ? 'O' : 'X');
        }

    }while(continuar || reiniciar);

    printf("\n\n");
}
