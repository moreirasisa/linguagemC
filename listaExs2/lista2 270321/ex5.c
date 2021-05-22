#include <stdio.h>

void main()
{
    char setor;
    float salario;
    printf("digite o setor em que você trabalha:\n");
    scanf("%c", &setor);
    printf("digite o seu salário:\n");
    scanf("%f", &salario);
    if (setor == 'V')
    {
        salario = salario + (salario * 0.3222);
        printf("o valor total do salário é %.2f.", salario);
    }
    else 
    {
        printf("o valor total do salário é %.2f.", salario);
    }
}