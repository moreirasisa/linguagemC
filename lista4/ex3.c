#include <stdio.h>

void main()
{
    int n1, n2;
    printf("digite dois números:\n");
    scanf("%d %d", &n1, &n2);
    for(int x=n1; x<n2; x++)
    {
        printf("%d, ", x);
    }
    printf("%d.\n", n2);
}