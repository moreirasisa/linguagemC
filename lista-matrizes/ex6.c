#include <stdlib.h>

void main()
{
    int x[3][3], soma;
    for (int i=0; i<3; i++)
    {
        for (int n=0; n<3; n++)
        {
            x[i][n] = i + n;
            if (x[i][n]%2 == 0)
            {
                soma += x[i][n];
            }
        }
    }
    printf("valores da matriz:\n");
    for (int i=0; i<3; i++)
    {
        for (int n=0; n<3; n++)
        {
            printf("%d, ", x[i][n]);
        }
    }
    printf("\nsoma dos valores pares: %d\n", soma);
}