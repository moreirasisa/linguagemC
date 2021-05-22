#include <stdio.h>

void main()
{
    float salario, reajuste, novoSalario;
    printf ("Informe o valor do seu salário atual:\n");
    scanf ("%f", &salario);
    printf ("Informe o percentual de reajuste da empresa:\n");
    scanf ("%f", &reajuste);
    novoSalario = (salario * (reajuste / 100)) + salario;
    printf ("O valor do novo salário deve ser de %.2f.", novoSalario);
}