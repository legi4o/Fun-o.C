#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float calculoimc( float peso, float altura)
{
    float resultado;
    resultado = peso / (altura * altura);

    return resultado;
}

char* recomendar(float recomendacaototal)
{
    char* resultrecomendacao[100];

    if (recomendacaototal < 18.5)
    {
        strcpy(resultrecomendacao, "Consulte um nutricionista para orienta��o");
    }
    else if (recomendacaototal > 18.5 && recomendacaototal < 24.9)
    {
        strcpy(resultrecomendacao, "Mantenha h�bitos saud�veis");
    }
    else if (recomendacaototal > 25 && recomendacaototal < 29.9)
    {
        strcpy(resultrecomendacao, "Considere uma dieta balanceada e atividade fisica");
    }
    else if (recomendacaototal > 30 && recomendacaototal < 34.9)
    {
        strcpy(resultrecomendacao, "Procure orienta��o de um profissional de sa�de");
    }
    else if (recomendacaototal > 35 && recomendacaototal < 39.9)
    {
        strcpy(resultrecomendacao, "Conmsulte um m�dico para avalia��o e orienta��o");
    }
    else if (recomendacaototal >= 40)
    {
        strcpy(resultrecomendacao, "Busque uma assist�ncia m�dica imediatamente");
    }

    return resultrecomendacao;
}

char* classificar(float classificacaototal)
{
    char* resultclassificacao[200];

    if (classificacaototal < 18.5)
    {
        strcpy(resultclassificacao, "Abaixo do peso");
    }
    else if (classificacaototal > 18.5 && classificacaototal< 24.9)
    {
        strcpy(resultclassificacao, "Peso normal");
    }
    else if (classificacaototal > 25 && classificacaototal< 29.9)
    {
        strcpy(resultclassificacao, "Sobrepeso");
    }
    else if (classificacaototal > 30 && classificacaototal < 34.9)
    {
        strcpy(resultclassificacao, "Obesidade grau 1");
    }
    else if (classificacaototal > 35 && classificacaototal < 39.9)
    {
        strcpy(resultclassificacao, "Obesidade grau 2");
    }
    else if (classificacaototal >= 40)
    {
        strcpy(resultclassificacao, "Obesidade grau 3");
    }

    return resultclassificacao;
}

int main()
{

    float peso;
    float altura;
    char recomendacao[100];
    char classificacao[100];
    float imc;

    setlocale(LC_ALL, "portuguese");

    printf(" Digite seu peso: ");
    scanf("%f", &peso);

    printf(" Digite sua altura: ");
    scanf("%f", &altura);

    imc = calculoimc(peso, altura);
    strcpy(classificacao, classificar(imc));
    strcpy(recomendacao, recomendar(imc));

    system("cls || clear");

    printf(" IMC: %.1f \n", imc);
    printf(" Recomenda��o: %s \n", recomendacao);
    printf(" Classifica��o: %s \n", classificacao);

    return 0;
}