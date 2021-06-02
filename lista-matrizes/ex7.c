#include <stdlib.h>

void main()
{
    int m[3][3], par, impar;
    for (int i=0; i<3; i++)
    {
        for (int n=0; n<3; n++)
        {
            m[i][n] = i + n;
            if (m[i][n]%2 == 0)
            {
                par++;
            }
            else
            {
                impar++;
            }
        }
    }
    printf("valores da matriz:\n");
    for (int i=0; i<3; i++)
    {
        for (int n=0; n<3; n++)
        {
            printf("%d, ", m[i][n]);
        }
        printf("\n");
    }
    printf("\nquantidade de números pares: %d\n", par);
    printf("quantidade de números ímpares: %d\n", impar);
}