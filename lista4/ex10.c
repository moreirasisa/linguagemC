#include <stdio.h>

void main()
{
    int x;
    for(x=0; x<=20; x++)
    {
        if((x%4)==0)
        {
            printf("%d\n", x);
        }
    }
}