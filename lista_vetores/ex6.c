#include <stdlib.h>

void main()
{
    int A[10], B[10], x;
    for(x=0; x<10; x++)
    {
        printf("informe o valor %d de A:\n", x);
        scanf("%d", &A[x]);
    }
    for(x=0; x<10; x++)
    {
        B[x] = A[x] * A[x];
        printf("para o valor digitado em %d, A é %d e B é %d.\n", x, A[x], B[x]);
    }
}