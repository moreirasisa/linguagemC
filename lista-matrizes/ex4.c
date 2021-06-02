#include <stdlib.h>

void main()
{
    int x[3][3];
    for (int i=0; i<3; i++)
    {
        for (int y=0; y<3; y++)
        {
            printf("informe os valores da matriz:\n");
            scanf("%d", &x[i][y]);
        }
    }    
    printf("os valores são:\n");
    for (int i=0; i<3; i++)
    {
        for (int y=0; y<3; y++)
        {
            printf("%d, ", x[i][y] * 5);
        }
    }
}