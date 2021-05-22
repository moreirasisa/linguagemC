#include <stdio.h>

void main()
{
    float n1, n2;
    printf ("informe um valor para A:\n");
    scanf ("%f", &n1);
    printf ("informe um valor para B:\n");
    scanf ("%f", &n2);

    printf ("resultado da adição: %.2f.", n1 + n2);
    printf ("resultado da subtração: %.2f.", n1 - n2);
    printf ("resultado da multiplicação: %.2f.", n1 * n2);
    printf ("resultado da divisão: %.2f.", n1 / n2);
}