#include <stdio.h>

void main()
{
    float C, N, E;
    printf("digite o código do usuário:\n");
    scanf("%f", &C);
    printf("digite o número de horas trabalhadas:\n");
    scanf("%f", &N);
    if (N > 50)
    {
        E = N - 50;
        printf("salário: %.2f.\n", (N - E) * 10);
        printf("salário excedente: %.2f.\n", E * 20);
        printf("salário total: %.2f.\n", ((N - E) * 10) + (E * 20));
    }
    else
    {
        printf("não há salário excedente.\n");
        printf("salário total: %.2f.\n", N * 10);
    }
}