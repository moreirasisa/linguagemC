#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main()
{
    char p1[10], p2[10];
    int y = 0;
    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    gets(p1);
    for (int x = strlen(p1); x >= 0; x--)
    {
        p2[y] = p1[x];
        y++;
    }
    p2[y] = '\0';
    if (strcmp(p1, p2) == 0)
    {
        printf("\nA palavra é palíndrome.\n");
    }
    else
    {
        printf("A palavra não é palíndrome.\n");
    }
}