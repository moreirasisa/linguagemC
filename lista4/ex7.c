#include <stdio.h>

void main()
{
    int n, x=0, maior=0, menor=0;
    while(x<10)
    {
        x++;
        printf("informe um número qualquer:\n");
        scanf("%d", &n);
        if(n>maior)
        {
            maior = n;
            menor = n;
        }
        else if(n<menor)
        {
            menor = n;
        }
    }
    printf("o maior número é: %d.\no menor número é: %d.\n", maior, menor);
}