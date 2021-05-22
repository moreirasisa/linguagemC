#include <stdio.h>

void main()
{
    float idade;
    printf("informe a sua idade:\n");
    scanf("%f", &idade);
    if (idade >= 5 && idade <= 7)
    {
        printf("infantil A.\n");
    }
    else if (idade >= 8 && idade <= 11)
    {
        printf("infantil B.\n");
    }
    else if (idade >= 12 && idade <= 13)
    {
        printf("juvenil A.\n");
    }
    else if (idade >= 14 && idade <= 17)
    {
        printf("juvenil B.\n");
    }
    else if (idade >= 18)
    {
        printf("adulto.\n");
    }
}