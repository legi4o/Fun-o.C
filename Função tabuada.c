#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tabuada(int n1)
{
    int i;

    for (i = 0; i <= 10; i++)
    {
        printf(" %d x %d = %d \n", n1, i, i * n1);
    }
}

int main()
{

    int numero;

    printf(" Digite um numero para gerar a tabuada: ");
    scanf("%d", &numero);

    tabuada(numero);

    return 0;
}