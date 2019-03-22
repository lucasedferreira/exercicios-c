#include <stdio.h>

int main() {
	
	float preco;
	int opcao_pagamento;
	
	printf("Informe o preco: ");
	scanf("%f", &preco);
	
	printf("\nEscolha a forma de pagamento: ");
	printf("\n\n1 - A vista em dinheiro ou cheque, recebe 15% de desconto");
	printf("\n2 - A vista no cartao de credito, recebe 5% de desconto");
	printf("\n3 - Em duas vezes, preco normal de etiqueta sem juros");
	printf("\n4 - Em duas vezes, preco normal de etiqueta mais juros de 10%");
	
	printf("\n\nEscolha: ");
	scanf("%d", &opcao_pagamento);
	
	switch (opcao_pagamento)
	{
		case 1:
			preco -= preco * 0.15;
		break;
		
		case 2:
			preco -= preco * 0.05;
		break;
		
		case 3:
			preco = preco;
		break;
		
		case 4:
			preco += preco * 0.10;
		break;
		
		default:
			printf("\n\nVoce deve selecionar uma das opcoes!");
			return 0;
	}
	
	printf("\nO preco final e: %.2f", preco);
	
	return 0;
}
