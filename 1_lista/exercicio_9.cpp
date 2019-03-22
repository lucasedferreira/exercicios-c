#include <stdio.h>

int main() {
	
	int num1, num2, num3, primeiro, segundo, terceiro;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("\nInforme o segundo numero: ");
	scanf("%d", &num2);
	
	if( num2 == num1 )
	{
		printf("\n\nOs numeros devem ser diferentes!");
		return 0;
	}
	
	printf("\nInforme o terceiro numero: ");
	scanf("%d", &num3);
	
	if( num3 == num1 || num3 == num2 )
	{
		printf("\n\nOs numeros devem ser diferentes!");
		return 0;
	}
	
	if ( num1 > num2 )
	{
		primeiro = num1;
		segundo = num2;
	
	} else {
		primeiro = num2;
		segundo = num1;
	}
	
	if ( num3 > primeiro )
	{
		terceiro = segundo;
		segundo = primeiro;
		primeiro = num3;
	
	} else if (num3 > segundo)
	{
		terceiro = segundo;
		segundo = num3;
	
	} else {
		terceiro = num3;
	}
	
	printf("\nA ordem decrescente dos numeros e: %d - %d - %d", primeiro, segundo, terceiro);
	
	return 0;
}
