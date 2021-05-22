#include <stdio.h>

void main()
{
    float n1, resultado;
    printf ("digite um número:\n");
    scanf ("%f", &n1);
    resultado = (n1 * 25) / 100;
    printf ("25%% de %f é igual a %.2f.\n", n1, resultado);
}