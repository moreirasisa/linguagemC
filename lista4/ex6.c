#include <stdio.h>

void main()
{
    int n, contador, x;
    while(x<10)
    {
        x++;
        printf("informe um número qualquer:\n");
        scanf("%d", &n);
        if(n>18)
        {
            contador++;
        }
    }
    printf("vocẽ digitou %d número(s) maior(es) que 18.\n", contador);
}