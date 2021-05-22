#include <stdio.h>

void main()
{
    float A, maior = 0;
    for (int i = 1; i <= 3; i++)
    {
        printf("digite um valor:\n");
        scanf("%f", &A);
        maior = (A > maior)?A:maior;
    }
    printf("o número %.2f é o maior.\n", maior);
}