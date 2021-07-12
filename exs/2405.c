#include <stdlib.h>

void main()
{
    int x[10] = {45,98,37,11,91,86,74,91,42,3};
    int y[10];
    int a, b=0;
    for(a=9; a>=0; a--)
    {
        y[b] = x[a];
        b++;
    }
    for(b=0; b<10; b++)
    {
        printf("%d\n", y[b]);
    }
}