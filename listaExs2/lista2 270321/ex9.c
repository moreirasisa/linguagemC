#include <stdio.h>

void main()
{
    float A, B;
    printf("digite dois números:\n");
    scanf("%f %f", &A, &B);
    while (A == B)
    {
      printf("digite valores diferentes!\n");
      printf("digite dois números:\n");
      scanf("%f %f", &A, &B);
    }
    if (A > B)
    {
        printf("maior número: %.2f.\nmenor número: %.2f.", A, B);
    }
    else 
    {
        printf("maior número: %.2f.\nmenor número: %.2f.", B, A);
    }
}