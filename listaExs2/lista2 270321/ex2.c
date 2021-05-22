#include <stdio.h>

void main()
{
    float sexo, altura, peso;
    printf("informe seu sexo, 0 para homem e 1 para mulher, e altura para calcular o seu peso.\n");
    scanf("%f %f", &sexo, &altura);
    if (sexo == 0)
    {
        peso = (altura * altura) * 23;
        printf("seu peso ideal é: %.2f.", peso);
    }
    else
    {
        peso = (altura * altura) * 22;
        printf("seu peso ideal é: %.2f.", peso);
    }
}