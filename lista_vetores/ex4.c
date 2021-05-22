#include <stdlib.h>

void main()
{
    int n[20], x;
    for(x=0; x<20; x++)
    {
        printf("informe o valor %d:\n", x);
        scanf("%d", &n[x]);
    }
    for(x=0; x<20; x++)
    {
        printf("%d,", n[x]);
    }
    printf("\n");
    for(x=0; x<20; x++)
    {
        if((n[x]%2)==0)
        {
            n[x]=0;
        }
        printf("%d,", n[x]);
    }
}