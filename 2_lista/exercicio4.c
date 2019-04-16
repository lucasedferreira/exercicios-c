void exercicio4() {
    printf("Exerc�cio 4\n\n");

    int num1 = 0, num2 = 0, count = 0;
    bool primo;

    printf("Informe o primeiro n�mero: ");
    scanf("%d", &num1);
    
    printf("Informe o segundo n�mero: ");
    scanf("%d", &num2);
    
    if(num1 < 0 || num2 < 0){
    	printf("Por favor informe n�meros positivos!");
	}

	printf("\nOs n�meros primos entre %d e %d s�o:\n", num1, num2);
    for(int i = num1; i <= num2; i++){
    	
    	primo = true;
    	for(int f = 2; f < i; f++){
    		if(i%f==0){
    			primo = false;
			}
		}
		
		if(primo && i!=1){
			printf("\n%d", i);
			count++;
		}
		printf("\nEntre %d e %d possuem %d n�meros primos.", num1, num2, count);
	}
}
