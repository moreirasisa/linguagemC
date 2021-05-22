#include <stdlib.h>

void main()
{
    int n[8], x, soma;
    n[0] = 1;
    for (x=1; x<8; x++)
    {
        n[x] = n[x-1] * 2;
        printf("posição %d = %d\n", x, n[x]);
        soma = soma + n[x];
    }
    printf("o resultado da soma é %d.\n", soma);
}