#include <stdio.h>

void main()
{
    float cot, dolar, real;
    printf ("Qual a cotação atual do dólar?\n");
    scanf ("%f", &cot);
    printf ("Digite o valor desejado em dólares:\n");
    scanf ("%f", &dolar);
    real = cot * dolar;
    printf ("O valor, em reais, é: %.2f.\n", real);
}