#include <stdio.h>
#include <stdlib.h>

void main()
{
    char nome[5][61];
    int idade[5];
    float salario[5], salarioReajustado[5];
    for (int x=0; x<5; x++)
    {
        printf("Digite seu nome: ");
        setbuf(stdin,NULL);
        gets(nome[x]);
        printf("\nDigite sua idade: ");
        scanf("%d", &idade[x]);
        printf("\nDigite seu salário: ");
        scanf("%f", &salario[x]);
        if (idade[x] >= 18 && idade[x] <= 27)
        {
            salarioReajustado[x] = salario[x] + (salario[x] * 0.05);
        } else if (idade[x] >= 28 && idade[x] <= 40)
        {
            salarioReajustado[x] = salario[x] + (salario[x] * 0.10);
        } else if (idade[x] >= 41 && idade[x] <= 53)
        {
            salarioReajustado[x] = salario[x] + (salario[x] * 0.18);
        } else if (idade[x] > 53)
        {
            salarioReajustado[x] = salario[x] + (salario[x] * 0.25);
        } else
        {
            salarioReajustado[x] = salario[x];
        }
        printf("\n");
    }
    for (int x=0; x<5; x++)
    {
        printf("%s, você tem %d anos, portanto seu salário que era de %.2f passará a ser de %.2f.\n", nome[x], idade[x], salario[x], salarioReajustado[x]);
    }
}
