#include <stdio.h>

int main() {
	
	float lado1, lado2, lado3;
	bool eh_triangulo = true;
	
	printf("Informe o primeiro lado: ");
	scanf("%f", &lado1);
	
	printf("Informe o segundo lado: ");
	scanf("%f", &lado2);
	
	printf("Informe o terceiro lado: ");
	scanf("%f", &lado3);
	
	if ( lado1 >= (lado2 + lado3) )
	{
		eh_triangulo = false;
	}
	
	if ( lado2 >= (lado1 + lado3) )
	{
		eh_triangulo = false;
	}
	
	if ( lado3 >= (lado1 + lado2) )
	{
		eh_triangulo = false;
	}
	
	if ( eh_triangulo )
	{
		
		if ( lado1 == lado2 && lado1 == lado3 )
		{
			printf("\nE um triangulo equilatero");
			
		} else if ( lado1 == lado2 || lado1 == lado3 || lado2 == lado3 )
		{
			printf("\nE um triangulo isosceles");
		
		} else {
			printf("\nE um triangulo escaleno");
		}
		
	} else {
		printf("\nNao e um triangulo!");
	}

	return 0;
}
