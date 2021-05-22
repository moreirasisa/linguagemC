#include <stdio.h>

void main()
{
    float X;
    printf("digite um número.\n");
    scanf("%f", &X);
    if (X >= 100)
    {
        printf("número maior ou igual a cem.\n");
    }
    else
    {
        printf("número menor que cem.\n");
    }
}