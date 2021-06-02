#include <stdlib.h>

void main()
{
    int x[5][5];
    for (int i=0; i<5; i++)
    {
        for (int n=0; n<5; n++)
        {
            x[i][n] = i + n;
            if (x[i][n]%2 == 0)
                x[i][n] = 1;
            else
                x[i][n] = -1;
        }
    }
    printf("os valores depois da substituição são:\n");
    for (int i=0; i<5; i++)
    {
        for (int n=0; n<5; n++)
        {
            printf("%d, ", x[i][n]);
        }
    }
}