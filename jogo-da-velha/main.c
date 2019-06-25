///Jogo da velha (com matriz)///
///saca a evolução desse Brasil///
#include<stdio.h>
#include<stdlib.h>

void tabuleiro(char casas2 [3] [3] ){
	system("@cls||clear");
	printf("   1   2   3\n");
	printf("1 _%c_|_%c_| %c \n", casas2[0][0], casas2[0][1], casas2[0][2]);
	// printf("  ___________\n");
	printf("2 _%c_| %c | %c \n", casas2[1][0], casas2[1][1], casas2[1][2]);
	// printf("  ___________\n");
	printf("3  %c | %c | %c \n", casas2[2][0], casas2[2][1], casas2[2][2]);
    printf("\n\n");

}

int main () {
	char posicoes[3][3];
    char res;
    int cont_jogadas ,l,c,vez = 0 ,i,j;
    do{
        cont_jogadas =  1;
        for(i=0;i<=2;i++){
            for(j=0;j<=2;j++){
                posicoes[i] [j] = ' ';
			}
		}
    	do{
            tabuleiro (posicoes);
            if(vez%2==0){
                printf("Vez do jogador X\n");
			}else{
				printf("Vez do jogador O\n");
			}
            printf("Digite a linha: ");
            scanf("%i",&l);
            printf("Digite a culuna: ");
            scanf("%i" ,&c);

            if(1 < 1 || c < 1 || 1 > 3 || c > 3) {
                l= 0;
				c= 0;	
			}else if (posicoes[l-1][c-1] != ' ') {
				l=0;
				c=0;
			}else {
				if(vez%2==0) {
					posicoes[l-1] [c-1] = 'X';
				}else {
					posicoes[l-1] [c-1] = 'O';
				}
				vez++;
				cont_jogadas++;
			}

			if(posicoes[0][0] == 'X' && posicoes [0][1] == 'X' && posicoes [0][2] == 'X') cont_jogadas =11;
			if(posicoes[1][0] == 'X' && posicoes [1][1] == 'X' && posicoes [1][2] == 'X') cont_jogadas =11;
			if(posicoes[2][0] == 'X' && posicoes [2][1] == 'X' && posicoes [2][2] == 'X') cont_jogadas =11;
			if(posicoes[0][0] == 'X' && posicoes [1][0] == 'X' && posicoes [2][0] == 'X') cont_jogadas =11;
			if(posicoes[0][1] == 'X' && posicoes [1][1] == 'X' && posicoes [2][1] == 'X') cont_jogadas =11;
			if(posicoes[0][2] == 'X' && posicoes [1][2] == 'X' && posicoes [2][2] == 'X') cont_jogadas =11;
			if(posicoes[0][0] == 'X' && posicoes [1][1] == 'X' && posicoes [2][2] == 'X') cont_jogadas =11;
			if(posicoes[0][2] == 'X' && posicoes [1][1] == 'X' && posicoes [2][0] == 'X') cont_jogadas =11;
			
			if(posicoes[0][0] == 'O' && posicoes [0][1] == 'O' && posicoes [0][2] == 'O') cont_jogadas=12;
			if(posicoes[1][0] == 'O' && posicoes [1][1] == 'O' && posicoes [1][2] == 'O') cont_jogadas=12;
			if(posicoes[2][0] == 'O' && posicoes [2][1] == 'O' && posicoes [2][2] == 'O') cont_jogadas=12;
			if(posicoes[0][0] == 'O' && posicoes [1][0] == 'O' && posicoes [2][0] == 'O') cont_jogadas=12;
			if(posicoes[0][1] == 'O' && posicoes [1][1] == 'O' && posicoes [2][1] == 'O') cont_jogadas=12;
			if(posicoes[0][2] == 'O' && posicoes [1][2] == 'O' && posicoes [2][2] == 'O') cont_jogadas=12;
			if(posicoes[0][0] == 'O' && posicoes [1][1] == 'O' && posicoes [2][2] == 'O') cont_jogadas=12;
			if(posicoes[0][2] == 'O' && posicoes [1][1] == 'O' && posicoes [2][0] == 'O') cont_jogadas=12;

		}while(cont_jogadas<=9);

		tabuleiro(posicoes);

		if(cont_jogadas==10){
			printf("Deu velha... :(\n");
		}

        if(cont_jogadas==11){
			printf("O X venceu!! :)\n");
		}

        if(cont_jogadas==12){
			printf("O O venceu!! :)\n");
		}

        printf("\nDeseja jogar novamente?(S p/ sim ou N p/ nao)\n");
        scanf("%s", &res);
	} while(toupper(res) == 'S');
}