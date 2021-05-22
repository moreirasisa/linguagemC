#include <stdio.h>

void main()
{
    float aulas, valorAula;
    printf ("Digite o número de aulas dadas:\n");
    scanf ("%f", &aulas);
    printf ("Digite o valor da hora aula:\n");
    scanf ("%f", &valorAula);
    //considerando que cada aula tenha uma hora
    printf ("O salário do professor é: %f\n", aulas * valorAula);
}