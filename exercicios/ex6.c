#include <stdio.h>

void main()
{
    float salario, desconto;
    printf ("Informe o valor do salário:\n");
    scanf ("%f", &salario);
    printf ("Informe o percentual de desconto do INSS:\n");
    scanf ("%f", &desconto);
    desconto = desconto / 100;
    printf ("O salário é %.2f\n", salario - (salario * desconto));
}