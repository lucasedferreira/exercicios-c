#include <stdio.h>

int main() {
	
	float peso, altura, imc;
	
	printf("Informe o peso: ");
	scanf("%f", &peso);
	
	printf("\nInforme altura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	if ( imc < 18.5 )
	{
		printf("\nAbaixo do peso");
	
	} else if ( imc <= 25 )
	{
		printf("\nPeso normal");
	
	} else if ( imc <= 30 )
	{
		printf("\nAcima do peso");
	
	} else if ( imc > 30 )
	{
		printf("\nObeso");
	}
	
	
	
	
	return 0;
}
