#include <stdio.h>

void main()
{
    int a, b, A, B;
    printf ("Digite um valor:\n");
    scanf ("%i", &a);
    printf ("Digite outro valor:\n");
    scanf ("%i", &b);
    A = a * a;
    B = b * b;
    printf ("O quadrado de A é %i e o de B é %i.\n", A, B);
    printf ("A soma dos dois números é %i.\n", A + B);
}