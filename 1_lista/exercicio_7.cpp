#include <stdio.h>

int main() {
	
	float raio, pi = 3.14159, diametro, circunferencia, area;
	
	printf("Informe o raio do circulo: ");
	scanf("%f", &raio);
	
	diametro = raio * 2;
	circunferencia = 2 * pi * raio;
	area = pi * raio * raio;
	
	printf("\nDiametro: %.2f", diametro);
	printf("\nCircunferencia: %.2f", circunferencia);
	printf("\nArea: %.2f", area);
	
	return 0;
}
