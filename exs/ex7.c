#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main()
{
    int tamanho = 30;
    char p1[tamanho], p2[tamanho];
    int y = 0, b = 0;
    printf("digite a primeira palavra: ");
    setbuf(stdin,NULL);
    gets(p1);
    printf("\ndigite a segunda palavra: ");
    setbuf(stdin,NULL);
    gets(p2);
    for (int x = 0; x < strlen(p1); x++)
    {
        if (p2[y] == p1[x])
        {
            do
            {
                y++;
                x++;
            } while (p2[y] == p1[x]);
            if (p2[y] == '\0')
            {
                b = 1;
                break;
            }
            y = 0;
        }
    }
    if (b == 1)
    {
        printf("\np2 existe dentro de p1\n");
    }
    else
    {
        printf("p2 não existe dentro de p1\n");
    }
}