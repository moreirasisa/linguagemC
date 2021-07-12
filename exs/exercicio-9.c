#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main()
{
    char p1[10], p2[10];
    int n1 = 0, c1, c2 = 0;
    printf("digite uma palavra: ");
    setbuf(stdin, NULL);
    gets(p1);
    while (n1 < strlen(p1))
    {
        printf("\ndigite um número: ");
        scanf("%d", &n1);
        if (n1 < 0 || n1 > strlen(p1))
        {
            break;
        }
        else
        {
            for (c1 = 0; c1 < strlen(p1); c1++)
            {
                if (n1 != c1)
                {
                    p2[c2] = p1[c1];
                    c2++;
                }
                else
                {
                    c1++;
                    p2[c2] = p1[c1];
                    c2++;
                }
                p2[c2] = '\0';
            }
            c2 = 0;
            for (c1 = 0; c1 < strlen(p2); c1++)
            {
                p1[c1] = p2[c1];
            }
            p1[c1] = '\0';
        }
        printf("\n%s\n", p1);
    }
}