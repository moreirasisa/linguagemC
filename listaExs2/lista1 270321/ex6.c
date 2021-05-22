#include <stdio.h>

void main()
{
    float n1, n2, n3, n4;
    printf("digite 4 números.\n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    if ((n3 * n3) >= 1000)
    {
        printf("%.2f.\n", n3 * n3);
    }
    else
    {
        printf("%.2f e seu quadrado %.2f.\n", n1, n1 * n1);
        printf("%.2f e seu quadrado %.2f.\n", n2, n2 * n2);
        printf("%.2f e seu quadrado %.2f.\n", n3, n3 * n3);
        printf("%.2f e seu quadrado %.2f.\n", n4, n4 * n4);
    }
}