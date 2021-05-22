#include <stdio.h>

void main()
{
    char cod;
    float v1;
    printf("digite o código. sendo E para euro, L para libra esterlina, D para dólar e I para iene.\n");
    scanf("%c", &cod);
    printf("digite um valor:\n");
    scanf("%f", &v1);
    if (cod == 'E')
    {
        printf("%.2f\n", v1 / 2.617);
    }
    else if (cod == 'L')
    {
        printf("%.2f\n", v1 / 3.816);
    }
    else if (cod == 'D')
    {
        printf("%.2f\n", v1 / 6.710);
    }
    else if (cod == 'I')
    {
        printf("%.2f\n", v1 / 0.018);
    }
}