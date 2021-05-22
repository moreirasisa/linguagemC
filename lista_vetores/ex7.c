#include <stdlib.h>

void main()
{
    int y[20], x, n, contador=0;
    for(n=0; n<20; n++)
    {
        printf("informe o valor %d:\n", n);
        scanf("%d", &y[n]);
    }
    printf("informe um valor para x:\n");
    scanf("%d", &x);
    for(n=0; n<20; n++)
    {
        if(x == y[n])
        {
            printf("o valor foi encontrado na posição %d.\n", n);
            contador++;
        }
    }
    if(contador==0)
    {
        printf("valor não encontrado!\n");
    }
}