#include <stdio.h>

void main()
{
    int anos, meses, dias;
    printf ("informe sua idade em anos:\n");
    scanf ("%d", &anos);
    printf ("em meses:\n");
    scanf ("%d", &meses);
    printf ("e em dias:\n");
    scanf ("%d", &dias);
    //considerando que os anos tem 365 dias e os meses, 30 dias
    printf ("sua idade, em dias, é: %d.", (anos * 365) + (meses * 30) + dias);
}