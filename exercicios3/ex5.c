#include <stdio.h>

void main()
{
    int numero = 0, potencia = 0, x = 0, resultado = 0;
    printf("digite um número:\n");
    scanf("%d", &numero);
    printf("digite o valor da potência:\n");
    scanf("%d", &potencia);
    resultado = 1;
    for (x = 1; x <= potencia; x = x + 1)
    {
        resultado = resultado * numero;
    }
    printf("o resultado é %d.\n", resultado);
}