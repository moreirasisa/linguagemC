#include <stdio.h>

void main()
{
    int n1;
    printf("digite um número inteiro:\n");
    scanf("%d", &n1);
    if ((n1 % 5) == 0 && (n1 % 3) == 0)
    {
        printf("é divisível.\n");
    }
    else 
    {
        printf("não é divisível. digite outro número.\n");
    }
}