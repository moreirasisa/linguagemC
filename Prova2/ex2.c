#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[15], b[15], c[15];
    int x, numero;
    srand((NULL));
    for (x=0; x<15; x++)
    {
        numero = rand() % 50;
        a[x] = numero; 
    }
    for (x=0; x<15; x++)
    {
        numero = rand() % 50;
        b[x] = numero; 
    }
    for (x=0; x<15; x++)
    {
        c[x] = a[x] + b[x];
        printf("soma da posição %d: %d + %d = %d\n", x+1, a[x], b[x], c[x]);
    }
}
