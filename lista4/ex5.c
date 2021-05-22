#include <stdio.h>

void main()
{
    int n1, x;
    printf("você deseja fazer a tabuada de qual número?\n");
    scanf("%d", &x);
    for(n1=0; n1<=10; n1++)
    {
        printf("%d x %d = %d\n", n1, x, n1*x);
    }
}