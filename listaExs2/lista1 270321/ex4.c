#include <stdio.h>

void main()
{
    float peso, E, M;
    printf("digite o peso do peixe:\n");
    scanf("%f", &peso);
    if (peso > 50)
    {
        E = peso - 50;
        M = E * 4;
        printf("o peso do peixe excedeu o estabelecido em %.2f kg.\n", E);
        printf("o valor da multa deverá ser de %.2f.\n", M);
    }
    else
    {
        printf("o peso do peixe não excedeu o estabelecido.\n");
        printf("não é necessário pagar multa.\n");
    }
}