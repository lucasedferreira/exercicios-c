#include <stdio.h>

int main() {
	
	int num1, num2, soma, produto, diferenca, quociente, resto;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("\nInforme o segundo numero: ");
	scanf("%d", &num2);
	
	soma 		= num1 + num2;
	produto 	= num1 * num2;
	diferenca 	= num1 - num2;
	quociente 	= num1 / num2;
	resto 		= num1 % num2;
	
	printf("\nSoma: %d", soma);
	printf("\nProduto: %d", produto);
	printf("\nDiferenca: %d", diferenca);
	printf("\nQuociente: %d", quociente);
	printf("\nResto: %d", resto);
}
