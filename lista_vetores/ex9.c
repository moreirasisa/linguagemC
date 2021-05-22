#include <stdlib.h>

void main()
{
    int n[100], x=0, maior = 0;
    while (x<100)
    {
        x++;
        printf("informe um valor:\n");
        scanf("%d", &n[x]);
        if(n[x] > maior)
        {
            maior = n[x];
        }
        if(n[x]==0)
        {
            x = 100;
        }
    }
    printf("o maior número é %d.\n", maior);
}