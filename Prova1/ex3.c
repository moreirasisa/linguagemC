#include <stdio.h>
#include <string.h>

void main()
{
    char nome[30], r;
    float peso, altura, imc;
    do
    {
        printf("qual o seu nome?\n");
        setbuf(stdin, NULL);
        scanf("%s", nome);
        printf("informe seu peso:\n");
        scanf("%f", &peso);
        printf("informe sua altura:\n");
        scanf("%f", &altura);
        imc = peso / (altura * altura);
        if (imc < 18.4)
        {
            printf("%s, no momento você está abaixo do peso.\n", nome);
        }
        else if (imc > 18.5 && imc < 24.9)
        {
            printf("%s, seu peso está normal.\n", nome);
        }
        else if (imc > 25.0 && imc < 29.9)
        {
            printf("%s, sobrepeso!\n", nome);
        }
        else if (imc > 30.0 && imc < 34.9)
        {
            printf("%s, você tem obesidade grau I.\n", nome);
        }
        else if (imc > 35.0 && imc < 39.9)
        {
            printf("%s, você tem obesidade grau II.\n", nome);
        }
        else
        {
            printf("%s, você tem obesidade grau III.\n", nome);
        }
        printf("deseja calcular um novo peso?\n");
        setbuf(stdin, NULL);
        scanf("%c", &r);
    } while (r == 's' || r == 'S');
}