#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float calculomedia(float notas[])
{
    int i;
    float somanotas;
    float media;

    for (i = 0; i < 3; i++)
    {
        somanotas += notas[i];
    }

    media = somanotas / (float)3;
    return media;
}

char *verificarsituacao(float media)
{

    char resultado[200];

    if (media >= 7)
    {
        strcpy(resultado, "Aprovado");
    }
    else if (media < 7)
    {
        strcpy(resultado, "Reprovado");
    }

    return resultado;
}

int main()
{
    int i;
    float notas[3];

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 3; i++)
    {
        printf(" Digite a %dº nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf(" %dº nota: %.2f \n", i + 1, notas[i]);
    }

    printf("\n");

    printf(" Média: %.2f \n", calculomedia(notas));
    printf(" Situação: %s \n", verificarsituacao(calculomedia(notas)));

    return 0;
}