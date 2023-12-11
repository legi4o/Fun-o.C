#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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

int main()
{
    int i;
    float somanotas;
    float notas[3];

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 3; i++)
    {
        printf(" Digite a %dº nota: ", i + 1);
        scanf("%f", &notas[i]);

        somanotas += notas[i];
    }

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf(" %dº nota: %.2f \n", i + 1, notas[i]);
    }

    printf(" Média: %.2f \n", calculomedia(notas));

    return 0;
}