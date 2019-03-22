#include <stdio.h>

int main() {
	
	float preco, inflacao;
	
	printf("Informe o preco do produto: ");
	scanf("%f", &preco);
	
	if ( preco < 100 )
	{
		inflacao = preco * 0.1;
		preco += inflacao;
	}
	
	if ( preco >= 200 )
	{
		inflacao = preco * 0.2;
		preco += inflacao;
	}
	
	printf("O preco com inflacao e: %.2f", preco);
	
	return 0;
}
