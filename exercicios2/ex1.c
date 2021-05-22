#include <stdio.h>

void main()
{
    int quantMin, quantMax;
    printf ("Informe a quantidade mínima de produtos:\n");
    scanf ("%i", &quantMin);
    printf ("Informe a quantidade máxima:\n");
    scanf ("%i", &quantMax);
    printf ("O estoque médio é: %i\n", (quantMin + quantMax) / 2);   
}