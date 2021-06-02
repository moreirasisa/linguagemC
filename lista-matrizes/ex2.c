#include <stdlib.h>

void main()
{
    int x[3][3], soma = 0, somaDiagonal = 0, i, y;
    for (i = 0; i < 3; i++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("digite os valores da matriz:\n");
            scanf("%d", &x[i][y]);
            soma += x[i][y];
            if (i == y)
                somaDiagonal += x[i][y];
        }
    }
    printf("a soma dos valores é: %d\n", soma);
    printf("a soma da diagonal principal é: %d\n", somaDiagonal);
}