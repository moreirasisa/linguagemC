#include <stdio.h>
#include <stdlib.h>

void main()
{
    char nome[61];
    float notas[4];
    char letra;
    float mediaA, mediaP;
    int cont=4;
    printf("Digite seu nome: ");
    gets(nome);
    printf("\nDigite A para calcular a média aritmética ou P para calcular a média ponderada: ");
    scanf("%c", &letra);
    for (int x=0; x<4; x++)
    {
        printf("\nDigite a nota %d: ", x+1);
        scanf("%f", &notas[x]);
        if (letra == 'A' || letra == 'A')
        {
            mediaA += notas[x];
        }
        else if (letra == 'P' || letra == 'p')
        {
            mediaP += notas[x] * cont;
        }
        cont--;
    }
    printf("\n");
    if (letra == 'A' || letra == 'a')
    {
        printf("%s, sua média é: %.2f", nome, mediaA / 4);
    } else if (letra == 'P' || letra == 'p')
    {
        printf("%s, sua média é: %.2f", nome, mediaP / 10);
    }
}
