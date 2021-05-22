#include <stdio.h>

void main()
{
    float n1, n2, resultado;
    printf ("digite um número:\n");
    scanf ("%f", &n1);
    printf ("digite um número:\n");
    scanf ("%f", &n2);
    resultado = (n1 + n2) * 0.45;
    printf ("a soma dos dois números é %.2f.\n45%% desta soma é %.2f.\n", n1 + n2, resultado);
}