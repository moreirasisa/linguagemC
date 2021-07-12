#include <stdio.h>
int main()
{
    char nome[61];
    int cont;
    printf("Digite a palavra: ");
    gets(nome);
    for (int i = 0; nome[i] != '\0'; i++)
    {
        if (nome[i] == nome[i] - 32)
        {
            nome[i] = nome[i] + 32;
        } 
    }
    printf("\n%s\n", nome);
}