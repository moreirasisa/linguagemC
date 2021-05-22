#include <stdio.h>

void main()
{
    float n1, A, B;
    printf("digite um número. se ele for positivo, será armazenado em A, se for negativo, em B.\n");
    scanf("%f", &n1);
    if (n1 > 0)
    {
        A = n1;
        printf("o número que você digitou, %.2f, é positivo, portanto foi armazenado em A.", A);
    }
    else
    {
        B = n1;
        printf("o número que você digitou, %.2f, é negativo, portanto foi armazenado em B.", B);
    }
}