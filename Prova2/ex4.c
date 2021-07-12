#include <stdio.h>
#include <stdlib.h>

void main()
{
    char nome[10][61];
    int vogal=0, consoante=0;
    for (int x=0; x<10; x++)
    {
        printf("Digite seu nome: ");
        setbuf(stdin,NULL);
        gets(nome[x]);
    }
    for (int x=0; x<10; x++)
    {
        for (int y = 0; nome[x][y] != '\0'; y++)
        {
            if (nome[x][y] == 'a' || nome[x][y] == 'A')
            {
                vogal++;
            } else if (nome[x][y] == 'e' || nome[x][y] == 'E')
            {
                vogal++;
            } else if (nome[x][y] == 'i' || nome[x][y] == 'I')
            {
                vogal++;
            } else if (nome[x][y] == 'o' || nome[x][y] == 'O')
            {
                vogal++;
            } else if (nome[x][y] == 'u' || nome[x][y] == 'U')
            {
                vogal++;
            } else
            {
                consoante++;
            }
        }
        printf("\n%s, seu nome tem %d vogal(is) e %d consoante(s)\n", nome[x], vogal, consoante);
        vogal=0;
        consoante=0;
    }
}