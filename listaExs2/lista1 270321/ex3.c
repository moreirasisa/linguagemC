#include <stdio.h>

void main()
{
    float n1;
    printf("digite um número. se ele for maior quem 100, será mostrado na tela, caso contrário, será mostrado o número 0.\n");
    scanf("%f", &n1);
    if (n1 > 100)
    {
        printf("%.2f.\n", n1);
    }
    else
    {
        printf("0.\n");
    }
}