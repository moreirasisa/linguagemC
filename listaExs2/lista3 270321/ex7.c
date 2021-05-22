#include <stdio.h>

void main()
{
    float A, B, C;
    printf("digite três valores:\n");
    scanf("%f %f %f", &A, &B, &C);
    if (A < B + C && B < A + C && C < A + B)
    {
        if ( A == B && B == C)
        {
            printf("o triângulo é equilátero.\n");
        } 
        else if (A == B || A == C || B == C)
        {
            printf("o triângulo é isósceles.\n");
        }
        else if (A != B && A != C && B != C)
        {
            printf("o triângulo é escaleno.\n");
        }
    }
}