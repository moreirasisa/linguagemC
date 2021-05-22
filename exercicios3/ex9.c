#include <stdio.h>

void main()
{
    float salarioMin, salarioFun;
    printf ("Informe o valor atual do salário mínimo:\n");
    scanf ("%f", &salarioMin);
    printf ("Informe o valor do seu salário:\n");
    scanf ("%f", &salarioFun);
    printf ("O funcionário ganha %.2f salário(s) minímo(s).\n", salarioFun / salarioMin);
}