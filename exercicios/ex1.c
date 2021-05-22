#include <stdio.h>
#include <math.h>

void main()
{
    float raio, pi;
    printf ("Digite o valor do raio:\n");
    scanf ("%f", &raio);
    printf ("Digite o valor de pi:\n");
    scanf ("%f", &pi);
    raio = raio * raio;
    printf ("O valor da áre é: %.2f\n", pi * raio);
}