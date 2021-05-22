#include <stdio.h>

void main()
{
    float valorCompra, juros, dias, valorPagar;
    printf ("qual o valor da compra?\n");
    scanf ("%f", &valorCompra);
    printf ("qual a taxa de juros pelo atraso?\n");
    scanf ("%f", &juros);
    printf ("há quantos dias o pagamento está atrasado?\n");
    scanf ("%f", &dias);
    valorPagar = valorCompra + (valorCompra * (juros / 100) * dias);
    printf ("o total a pagar será de %.2f.\n", valorPagar);
}