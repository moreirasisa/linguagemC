#include <stdlib.h>

void main()
{
    int x[2][2], i, n, soma = 0;
    for (i = 0; i < 2; i++)
    {
        for (n = 0; n < 2; n++)
        {
            printf("digite os valores da matriz:\n");
            scanf("%d", &x[i][n]);
            soma = soma + x[i][n];
        }
    }
    printf("os valores são:\n");
    for (i = 0; i < 2; i++)
    {
        for (n = 0; n < 2; n++)
        {
            printf("%d, ", x[i][n]);
            printf("\n");
        }
    }
    printf("a soma é: %d", soma);
}
  