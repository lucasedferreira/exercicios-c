#include <stdio.h>

int main() {
	
	int idade, tem_cnh, num3, primeiro, segundo, terceiro, resposta;
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	printf("\nSe voce tem CNH digite 1, caso contrario digite 2: ");
	scanf("%d", &tem_cnh);
	
	if( idade >= 18 && tem_cnh == 1 )
	{
		printf("\nVoce pode dirigir");
	} else {
		printf("\nVoce nao pode dirigir");
	}

	return 0;
}
