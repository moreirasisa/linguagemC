#include <stdlib.h>

void main()
{
    int x[3][3], y[3][3], z[3][3];
    for (int i=0; i<3; i++)
    {
        for (int n=0; n<3; n++)
        {
            x[i][n] = i + n;
            y[i][n] = n - i;
            z[i][n] = x[i][n] + y[i][n];
        }
    }
    printf("valores da matriz X:\n");
    for (int i=0; i<3; i++)
    {
        for (int n=0; n<3; n++)
        {
            printf("%d, ", x[i][n]);
        }
        printf("\n");
    }
    printf("valores da matriz Y:\n");
    for (int i=0; i<3; i++)
    {
        for (int n=0; n<3; n++)
        {
            printf("%d, ", y[i][n]);
        }
        printf("\n");
    }
    printf("soma das matrizes:\n");
    for (int i=0; i<3; i++)
    {
        for (int n=0; n<3; n++)
        {
            printf("%d, ", z[i][n]);
        }
        printf("\n");
    }
}