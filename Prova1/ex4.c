#include <stdio.h>

void main()
{
    char nome[30];
    float nota1, nota2, nota3, nota4, media, mediaMaior=0, qnt = 0;
    do
    {
        qnt = qnt + 1;
        printf("informe o nome do aluno:\n");
        setbuf(stdin,NULL);
        scanf("%s", nome);
        printf("informe as quatro notas:\n");
        scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
        media = (nota1 + nota2 + nota3 + nota4) / 4;
        if (media > mediaMaior)
        {
            mediaMaior = media;
        }
        if (media >= 6)
        {
            printf("aluno aprovado!\n");
        } else {
            printf("aluno reprovado!\n");
        }
    } while (qnt < 5);
    printf("o aluno com a maior média é %s.\n", nome);
}