#include <math.h>
#include <stdio.h>

void main()
{
    float n1;
    printf("digite um número:\n");
    scanf("%f", &n1);
    n1 = sqrtf(n1);
    if (n1 > 7)
    {
        n1 = n1 + 3;
        printf("%.2f.", n1);
    }
    else 
    {
        printf("%.2f.", n1);
    }
}