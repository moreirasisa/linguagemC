#include <stdio.h>

void main()
{
    int n1, x, contador;
    while(x<10)
    {
        x++;
        printf("informe um número:\n");
        scanf("%d", &n1);
        if(n1==1)
        {
        }
        else if(n1==2 || n1==3 || n1==5 || n1==7)
        {
            contador++;
        }
         else if((n1%2)==0 || (n1%3)==0 || (n1%4)==0 || (n1%5)==0 || (n1%6)==0 || (n1%7)==0 || (n1%8)==0 || (n1%9)==0)
        {
        }
        else 
        {
            contador++;
        }
    }
    printf("dentre os números que você informou, %d é(são) primo(s).\n", contador);
}