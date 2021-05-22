#include <stdio.h>

void main()
{
    float anos, nCigarros, preco, total;
    printf ("há quantos anos você fuma?\n");
    scanf ("%f", &anos);
    printf ("quantos cigarros você fuma, por dia?\n");
    scanf ("%f", &nCigarros);
    printf ("qual o preço da carteira de cigarros?\n");
    scanf ("%f", &preco);
    total = ((anos * 365 * nCigarros) / 20) * preco;
    printf ("O total de dinheiro gasto é %.2f.", total);
}