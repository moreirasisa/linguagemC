#include <stdio.h>

void main()
{
    int n1;
    printf("informe um número:\n");
    scanf("%d", &n1);
    if ((n1 % 2) == 0)
    {
        printf("o número informado é par!\n");
    } else {
        printf("o número informado é ímpar!\n");
    }
}