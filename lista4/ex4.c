#include <stdio.h>

void main()
{
    int n1, n2=9;
    printf("vamos fazer a tabuada do 9!\n");
    for(n1=0; n1<=10; n1++)
    {
        printf("%d x %d = %d\n", n1, n2, n1*n2);
    }
}