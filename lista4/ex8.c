#include <stdio.h>

void main()
{
    int n1;
    printf("digite um número entre 0 e 100:\n");
    scanf("%d", n1);
        if(n1==1)
        {
            printf("o numero %d não é primo.\n", n1);
        }
        else if(n1==2 || n1==3 || n1==5 || n1==7)
        {
            printf("o número %d é primo.\n", n1);
        }
         else if((n1%2)==0 || (n1%3)==0 || (n1%4)==0 || (n1%5)==0 || (n1%6)==0 || (n1%7)==0 || (n1%8)==0 || (n1%9)==0)
        {
            printf("o número %d não é primo.\n", n1);
        }
        else 
        {
            printf("o número %d é primo.\n", n1);
        }
}