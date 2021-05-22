#include <stdlib.h>

void main()
{
    int A[10], B[10], C[10], x;
    for(x=0; x<10; x++)
    {
        printf("informe o %d valor de A:\n", x);
        scanf("%d", &A[x]);
    }
    for(x=0; x<10; x++)
    {
        printf("informe o %d valor de B:\n", x);
        scanf("%d", &B[x]);
    }
    for(x=0; x<10; x++)
    {
        C[x] = A[x] + B[x];
        printf("soma dos elementos em %d: %d\n", x, C[x]);
    }
}