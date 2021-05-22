#include <stdio.h>

void main()
{
    float preco, quantidade;
    printf ("qual o preço do produto que você vendeu?\n");
    scanf ("%f", &preco);
    printf ("quantos produtos deste você vendeu?\n");
    scanf ("%f", &quantidade);
    printf ("o valor da comissão é %.2f.\n", (preco * quantidade) * 0.05);
}