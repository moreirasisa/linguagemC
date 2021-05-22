#include <stdio.h>

void main()
{
    float valor, km, distancia;
    printf ("Informe o valor do litro do combustível:\n");
    scanf ("%f", &valor);
    printf ("Quantos km o carro anda por litro?\n");
    scanf ("%f", &km);
    printf ("Qual a distância a percorrer?\n");
    scanf ("%f", &distancia);
    printf ("Serão necessários %.2f litros para percorrer a distância.\n", distancia / km);
    printf ("Será gasto R$%.2f com combustível.\n", valor * (distancia / km));
}