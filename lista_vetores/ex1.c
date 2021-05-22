#include <stdlib.h>

void main()
{
    int n[40], y;
    for (y=0; y<40; y++)
    {
        printf("informe um valor:\n");
        scanf("%d", &n[y]);
        if (n[y] < 0)
        {
            n[y] = 0;
        }
        printf("valor %d = %d\n", y, n[y]);
    }
}