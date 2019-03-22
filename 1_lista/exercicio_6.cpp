#include <stdio.h>

int main() {
	
	float metros, decimetros, centimetros, milimetros;
	
	printf("Informe o a distancia em metros: ");
	scanf("%f", &metros);
	
	decimetros = metros * 10;
	centimetros = metros * 100;
	milimetros = metros * 1000;
	
	printf("\nDecimetros: %.2f", decimetros);
	printf("\nCentimmetros: %.2f", centimetros);
	printf("\nMilimetros: %.2f", milimetros);
	
	return 0;
}
