#include <stdio.h>

void main()
{
    int idade;
    printf("quantos anos você tem?\n");
    scanf("%d", &idade);
    if (idade < 18)
    {
        printf("faltam %d anos para completar a maioridade.\n", 18 - idade);
    }
    else
    {
        printf("você é maior de idade há %d anos.\n", idade - 18);
    }
}