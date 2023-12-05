#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho()
{
    printf("\n=====================\n");
    printf("\tSENAI");
    printf("\n=====================\n");
}

int somar(int n1, int n2)
{
    int resultado;
    resultado = n1 + n2;

    return resultado;
}

int main()
{

    int primeironumero;
    int segundonumero;
    int soma;

    cabecalho();
    printf(" Digite o primeiro numero: ");
    scanf("%d", &primeironumero);

    cabecalho();
    printf(" Digite o segundo numero: ");
    scanf("%d", &segundonumero);

    soma = somar(primeironumero, segundonumero);

    printf(" Primeiro numero: %d \n", primeironumero);
    printf(" Segundo numero: %d \n", segundonumero);
    printf(" Soma: %d \n", soma);


    return 0;
}