#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void parimpar(int numero[])
{
    int i;

    for (i = 0; i < 6; i++)
    {
        if (numero[i] % 2 == 0)
        {
            printf(" O %dº número é par \n", numero[i]);
        }
        else
        {
            printf(" O %dº número é impar \n", numero[i]);
        }
    }
}

void cabecalho()
{

    printf("=======SENAI========\n");
}

int main()
{

    int numero[6];
    int i;

    setlocale(LC_ALL, "portuguese");

    cabecalho();

    for (i = 0; i < 6; i++)
    {
        printf(" Digite o %dº número: ", i + 1);
        scanf("%d", &numero[i]);
    }
    
    cabecalho();

    parimpar(numero);

    return 0;
}