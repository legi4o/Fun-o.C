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
            printf(" O %d� n�mero � par \n", numero[i]);
        }
        else
        {
            printf(" O %d� n�mero � impar \n", numero[i]);
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
        printf(" Digite o %d� n�mero: ", i + 1);
        scanf("%d", &numero[i]);
    }
    
    cabecalho();

    parimpar(numero);

    return 0;
}