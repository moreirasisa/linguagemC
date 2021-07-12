#include <stdio.h>
int main()
{
    char nome[61];
    int cont;
    printf("Digite o nome: ");
    gets(nome);
    for (int i = 0; nome[i] != '\0'; i++)
    {
        if (nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u' 
        || nome[i] == 'A' || nome[i] == 'E' || nome[i] == 'I' || nome[i] == 'O' || nome[i] == 'U')
        {
            cont++;
        } 
    }
    printf("\nO nome digitado foi: %s\n", nome);
    printf("Há %d vogais nesse nome.\n", cont);
}