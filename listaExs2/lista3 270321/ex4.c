#include <stdio.h>

void main()
{
    float v1, v2, cod;
    printf("digite um código. sendo 1 para soma, 2 para subtração, 3 para divisão e 4 para multiplicação:\n");
    scanf("%f", &cod);
    printf("digite dois valores:\n");
    scanf("%f %f", &v1, &v2);
    if (cod == 1)
    {
        printf("%.2f", v1 + v2);
    }
    else if (cod == 2)
    {
        printf(".2f", v1 - v2);
    }
    else if (cod == 3)
    {
        printf(".2f", v1 / v2);
    }
    else if (cod == 4)
    {
        printf(".2f", v1 * v2);
    }
}