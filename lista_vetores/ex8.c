#include <stdlib.h>

void main()
{
    int x[40], y, z;
    for(y=0; y<40; y++)
    {
        printf("informe o valor %d:\n", y);
        scanf("%d", &x[y]);
    }
    for(y=0; y<40; y++)
    {
        if((x[y]%2)==0)
        {
            z++;
            printf("%d, ", x[y]);
        }
    }
    printf("\nhá %d valores pares.", z);
}