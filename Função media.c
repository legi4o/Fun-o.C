#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somar(int n1, int n2)
{
    int resultado;
    resultado = (n1 + n2) / 2;

    return resultado;
}

int main()
{

    int primeironumero;
    int segundonumero;
    int soma;
    float media;

    printf(" Digite o primeiro numero: ");
    scanf("%d", &primeironumero);

    printf(" Digite o segundo numero: ");
    scanf("%d", &segundonumero);

    printf("\n");

    soma = somar(primeironumero, segundonumero);
    media = (float)soma;

    printf(" Primeiro numero: %d \n", primeironumero);
    printf(" Segundo numero: %d \n", segundonumero);
    printf(" Media: %1.f \n", media);

    return 0;
}