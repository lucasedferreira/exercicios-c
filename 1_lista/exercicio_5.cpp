#include <stdio.h>

int main() {
	
	int num1;
	
	printf("Informe o numero: ");
	scanf("%d", &num1);
	
	if( (num1 % 2) == 0 )
	{
		printf("\nO numero e par");
	}else{
		printf("\nO numero e impar");
	}
	
	return 0;
}
