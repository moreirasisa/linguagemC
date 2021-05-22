#include <stdio.h>

void main()
{
    int x, n1;
    printf("digite um número.\n");
    scanf("%d", &n1);
    x = n1 % 2;
    if (x == 0)
    {
        printf("o número, %d, é par.\n", n1);
    }
    else
    {
        printf("o número, %d, é ímpar.\n", n1);
    }
}