#include <stdio.h>

void main()
{
    char resp;
    float valor;
    do
    {
        printf("\ninforme o preço unitário do jornal: ");
        scanf("%f", &valor);
        printf("\ngasto em um mês: %.2f.", valor * 30);
        printf("\ngasto em dois meses: %.2f.", valor * 60);
        printf("\ngasto em três meses: %.2f.", valor * 90);
        printf("\ngasto em seis meses: %.2f.", valor * 180);
        printf("\ngasto em um ano: %.2f.", valor * 365);
        printf("deseja informar um novo valor?");
        scanf("%c", &resp);
    } while (resp == 's' || resp == 'S');
    //não tem informação suficiente para terminar o exercício. quantos jornais são vendidos por dia?
}