void exercicio2() {
    printf("Exercício 2\n\n");

    float salario = 0, imposto = 0;

    printf("Informe o salário: ");
    scanf("%f", &salario);

    if(salario <= 190398) {
        imposto = 0;
    }else if(salario <= 282665) {
        imposto = salario * 0.075;
    }else if(salario <= 375105) {
        imposto = salario * 0.15;
    }else if(salario <= 466468) {
        imposto = salario * 0.225;
    }else{
        imposto = salario * 0.275;
    }

    printf("O imposto é %.2f", imposto);
}
