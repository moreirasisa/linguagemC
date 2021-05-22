#include <stdio.h>

void main()
{
    int x, n1, P, I;
    printf("digite um número. se ele for par, será armazenado em P e se for ímpar, em I.\n");
    scanf("%d", &n1);
    x = n1 % 2;
    if (x == 0)
    {
        P = n1;
        printf("o número, %d, é par. portanto foi armazenado em P.\n", P);
    }
    else
    {
        I = n1;
        printf("o número, %d, é ímpar. portanto foi armazenado em I.\n", I);
    }
}