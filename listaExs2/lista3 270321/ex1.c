#include <stdio.h>

void main()
{
    float n1, n2, media;
    printf("digite a nota 1 e a nota 2:\n");
    scanf("%f %f", &n1, &n2);
    media = (n1 + n2) / 2;
    if (media < 6)
    {
        printf("reprovado!");
    }
    else if (media > 6 && media < 6.9)
    {
        printf("recuperação!");
    }
    else
    {
        printf("aprovado!");
    }
}