#include <stdio.h>

int main() {
	
	int num1, num2;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("\nInforme o segundo numero: ");
	scanf("%d", &num2);
	
	if( num1 > num2 )
	{
		printf("\n%d e maior", num1);
	}
	
	if( num2 > num1 )
	{
		printf("\n%d e maior", num2);
	}
	
	if( num1 == num2 )
	{
		printf("\nEstes numeros sao iguais");
	}
}
