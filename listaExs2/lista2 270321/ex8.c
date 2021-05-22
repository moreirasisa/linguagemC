#include <stdio.h>

void main()
{
    float salario;
    printf("digite o valor do seu salário:\n");
    scanf("%f", &salario);
    if (salario > 2500)
    {
        salario = salario + (salario * 0.10);
        printf("o novo salário é de %.2f.", salario);
    }
    else 
    {
        salario = salario + (salario * 0.25);
        printf("o novo salário é de %.2f.", salario);
    }
}