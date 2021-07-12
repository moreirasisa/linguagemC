#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main()
{
    char p1[30];
    int n1;
    printf("digite uma palavra: ");
    setbuf(stdin, NULL);
    gets(p1);
    for (int x = 0; x < strlen(p1); x++)
    {
        printf("\ndigite um número: ");
        scanf("%d", &n1);
        if (n1 < 0 || n1 > strlen(p1))
        {
            break;
        }
        else
        {
            p1[n1] = '-';
            printf("\n%s\n", p1);
        }
    }
}