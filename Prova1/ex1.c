#include <stdio.h>

void main()
{
    char genero;
    int i, maiorIdade, qnt;
    qnt = 0;
    maiorIdade = 0;
    while (qnt < 10)
    {
        qnt = qnt + 1;
        printf("\ninforme o genêro da pessoa %d:\n", qnt);
        scanf(" %c", &genero);
        printf("\ninforme a idade: \n");
        scanf("%d", &i);
        if (i > maiorIdade && genero == 'm')
        {
            maiorIdade = i;
        }
    }
    printf("\na idade do homem mais velho é %d.", maiorIdade);
}