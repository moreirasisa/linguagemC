#include <stdlib.h>

void main()
{
    int x[6][6], maior=0;
    for (int i=0; i<6; i++)
    {
        for (int y=0; y<6; y++)
        {
            printf("informe os valores da matriz:\n");
            scanf("%d", &x[i][y]);
            if (x[i][y] > 10)
                maior ++;
        }
    }
    printf("os valores são:\n");
    for (int i=0; i<6; i++)
    {
        for (int y=0; y<6; y++)
        {
            printf("%d, ", x[i][y]);           
        }
    }
    printf("\n%d número(s) maiore(s) que 10.\n", maior);
}