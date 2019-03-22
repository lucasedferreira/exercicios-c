#include <stdio.h>

int main()
{
	float nota;
	
	printf("Informe a nota:\n");
	scanf("%f", &nota);
	
	if(nota >= 9) {
		printf("A");
	}else if(nota >= 8){
		printf("B");
	}else if(nota >= 7){
		printf("C");
	}else if(nota >= 6){
		printf("D");
	}else{
		printf("F");
	}
	
	return 0;
}
