#include <stdlib.h>

void main()
{
    int n[20], x, z;
    for (x = 0; x < 20; x++)
    {
        printf("informe o valor %d:\n", x);
        scanf("%d", &n[x]);
    }
    for (x = 0; x < 20; x++)
    {
        if (n[x] > 10)
        {
            printf("%d, ", n[x]);
            z++;
        }
    }
    printf("\n%d valores são maiores que 10.\n", z);
}