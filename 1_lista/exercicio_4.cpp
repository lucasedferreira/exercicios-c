#include <stdio.h>

int main() {
	
	float num1, num2, num3, num4, media;
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("\nInforme o segundo numero: ");
	scanf("%f", &num2);
	
	if( num2 == num1 )
	{
		printf("\n\nOs numeros devem ser diferentes!");
		return 0;
	}
	
	printf("\nInforme o terceiro numero: ");
	scanf("%f", &num3);
	
	if( num3 == num1 || num3 == num2 )
	{
		printf("\n\nOs numeros devem ser diferentes!");
		return 0;
	}
	
	printf("\nInforme o quarto numero: ");
	scanf("%f", &num4);
	
	if( num4 == num1 || num4 == num2  || num4 == num3)
	{
		printf("\n\nOs numeros devem ser diferentes!");
		return 0;
	}
	
	media = (num1 + num2 + num3 + num4) / 4;
	
	printf("\n\nMedia: %f", media);
	
	return 0;
}
