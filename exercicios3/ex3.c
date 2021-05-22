#include <stdio.h>

void main()
{
    float vi, a, t;
    printf ("qual a velocidade inicial do objeto?\n");
    scanf ("%f", &vi);
    printf ("e a aceleração?\n");
    scanf ("%f", &a);
    printf ("quanto tempo o objeto demora para realizar o trajeto?\n");
    scanf ("%f", &t);
    printf ("o valor da velocidade é: %.2f.", vi + (a * t));
}