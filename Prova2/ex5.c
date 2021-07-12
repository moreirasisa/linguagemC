#include <stdio.h>
#include <stdlib.h>

void main()
{
    char nome[10][61];
    int qntAula[10];
    float valorAula[10];
    for (int x = 0; x < 10; x++)
    {
        printf("Digite seu nome: ");
        setbuf(stdin, NULL);
        gets(nome[x]);
        printf("\nDigite quantas aulas diárias: ");
        scanf("%d", &qntAula[x]);
        printf("\nDigite o valor da hora aula: ");
        scanf("%f", &valorAula[x]);
    }
    for (int x=0; x<10; x++)
    {
        printf("\n%s, seu salário é de %.2f\n", nome[x], 30 * (qntAula[x] * valorAula[x]));
    }
}