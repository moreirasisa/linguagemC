#include <stdio.h>

void main()
{
    int codigo;
    printf("digite o código do candidato:\n");
    scanf("%d", &codigo);
    if (codigo == 1)
    {
        printf("Chaves.");
    }
    else if (codigo == 2)
    {
        printf("Quico.");
    }
    else if (codigo == 3)
    {
        printf("D. Florinda");
    }
    else if (codigo == 4)
    {
        printf("Sr. Madruga.");
    }
    else if (codigo < 1 || codigo > 4)
    {
        printf("este código não existe.");
    }
}