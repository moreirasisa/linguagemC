#include <stdlib.h>

void main()
{
    char nome[61];
    int cont;
    printf("Digite o nome:\n");
    gets(nome);
    for (int i = 0; nome[i] != '\0'; i++)
    {
        cont++;
    }
    printf("O nome digitado foi: %s\n", nome);
    printf("Número de caracteres: %d\n", cont);
}