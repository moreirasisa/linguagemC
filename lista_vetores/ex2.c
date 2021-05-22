#include <stdlib.h>

void main()
{
    int n[10], x, a=20;
    for(x=0; x<10; x++)
    {
        printf("informe um valor:\n");
        scanf("%d", &n[x]);
        if(n[x] == 0)
        {
            a = x;
        }
    }
    if(a==20)
    {
        printf("o valor zero não foi digitado.\n");
    }
    else
    {
        printf("o valor zero foi digitado na posição %d.\n", a+1);
    }
}