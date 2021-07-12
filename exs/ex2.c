#include <stdlib.h>

void main()
{
    int v[3][3] = {{9, 9, 9}, {9, 9, 9}, {9, 9, 9}}, b = 1, n, a, y;
    do
    {
        if (b == 1)
        {
            printf("digite a linha e a coluna em que deseja colocar X:\n");
            scanf("%d %d", &n, &a);
            if (v[n][a] != 9)
            {
                printf("a posição já está ocupada, digite outra.\n");
                break;
            }
            v[n][a] = 1;
            b = 0;
        }
        else
        {
            printf("digite a linha e a coluna em que deseja colocar O:\n");
            scanf("%d %d", &n, &a);
            if (v[n][a] != 9)
            {
                printf("a posição já está ocupada, digite outra.\n");
                break;
            }
            v[n][a] = 0;
            b = 1;
        }
        if (n > 2 || a > 2)
        {
            printf("número inválido.\n");
            break;
        }
        printf("\n\n");
        for (int c = 0; c < 30; c++)
        {
            printf("*");
        }
        printf("\n");
        for (n = 0; n < 3; n++)
        {
            printf("[");
            for (a = 0; a < 3; a++)
            {
                printf("%d ", v[n][a]);
            }
            printf("]");
            printf("\n");
        }
        for (int c = 0; c < 30; c++)
        {
            printf("*");
        }
        printf("\n");
        if (v[0][0] == 1 && v[0][1] == 1 && v[0][2] == 1)
        {
            printf("X ganhou!\n");
            break;
        }
        else if (v[1][0] == 1 && v[1][1] == 1 && v[1][2] == 1)
        {
            printf("X ganhou!\n");
            break;
        }
        else if (v[2][0] == 1 && v[2][1] == 1 && v[2][2] == 1)
        {
            printf("X ganhou!\n");
            break;
        }
        else if (v[0][0] == 1 && v[1][0] == 1 && v[2][0] == 1)
        {
            printf("X ganhou!\n");
            break;
        }
        else if (v[0][1] == 1 && v[1][1] == 1 && v[2][1] == 1)
        {
            printf("X ganhou!\n");
            break;
        }
        else if (v[0][2] == 1 && v[1][2] == 1 && v[2][2] == 1)
        {
            printf("X ganhou!\n");
            break;
        }
        else if (v[2][0] == 1 && v[1][1] == 1 && v[0][2] == 1)
        {
            printf("X ganhou!\n");
            break;
        }
        else if (v[0][0] == 1 && v[1][1] == 1 && v[2][2] == 1)
        {
            printf("X ganhou!\n");
            break;
        }
        else if (v[0][0] == 0 && v[0][1] == 0 && v[0][2] == 0)
        {
            printf("O ganhou!\n");
            break;
        }
        else if (v[1][0] == 0 && v[1][1] == 0 && v[1][2] == 0)
        {
            printf("O ganhou!\n");
            break;
        }
        else if (v[2][0] == 0 && v[2][1] == 0 && v[2][2] == 0)
        {
            printf("O ganhou!\n");
            break;
        }
        else if (v[0][0] == 0 && v[1][0] == 0 && v[2][0] == 0)
        {
            printf("O ganhou!\n");
            break;
        }
        else if (v[0][1] == 0 && v[1][1] == 0 && v[2][1] == 0)
        {
            printf("O ganhou!\n");
            break;
        }
        else if (v[0][2] == 0 && v[1][2] == 0 && v[2][2] == 0)
        {
            printf("O ganhou!\n");
            break;
        }
        else if (v[0][0] == 0 && v[1][1] == 0 && v[2][2] == 0)
        {
            printf("O ganhou!\n");
            break;
        }
        else if (v[2][0] == 0 && v[1][1] == 0 && v[0][2] == 0)
        {
            printf("O ganhou!\n");
            break;
        }
        else if (y == 8)
            printf("velha\n");
        y++;
    } while (y < 9);
}