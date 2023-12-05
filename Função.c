#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpatela()
{
    fflush(stdin);
    system("cls || clear");
}

void cabecalho()
{
    printf("\n=====================\n");
    printf("\tSENAI");
    printf("\n=====================\n");
}

void mostraridade(int idade)
{
    printf(" Idade: %d \n", idade);
}

int main()
{

    char nome[100];
    int idade;

    cabecalho();
    printf(" Digite um nome: ");
    gets(nome);
    limpatela();

    cabecalho();
    printf(" Digite uma idade: ");
    scanf("%d", &idade);
    limpatela();

    printf(" Nome: %s \n", nome);
    mostraridade(idade);

    return 0;
}