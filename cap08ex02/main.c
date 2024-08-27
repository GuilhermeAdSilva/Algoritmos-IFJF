//Considere a seguinte declaração:
//int vet[5][5] = {1,2,2,2,2,3,1,2,2,2,3,3,1,2,2,3,3,3,1,2,3,3,3,3,1}
//Codificar as seguintes funções:
//a) Calcule a soma dos elementos da diagonal principal
//b) Calcule a soma dos elementos localizados acima da diagonal principal
//c) Calcule a soma dos elementos localizados abaixo da diagonal principal

#include <stdio.h>
#include <stdlib.h>

int somaDiagonalPrincipal (int vet[5][5]);
int somaAcimaDiagonalPrincipal (int vet[5][5]);
int somaAbaixoDiagonalPrincipal (int vet[5][5]);

int main()
{
    int vet[5][5] = {1,2,2,2,2,3,1,2,2,2,3,3,1,2,2,3,3,3,1,2,3,3,3,3,1};
    printf("A soma dos elementos da diagonal principal e: %d\n", somaDiagonalPrincipal(vet));
    printf("A soma dos elementos acima da diagonal principal e: %d\n", somaAcimaDiagonalPrincipal(vet));
    printf("A soma dos elementos abaixo da diagonal principal e: %d", somaAbaixoDiagonalPrincipal(vet));
    return 0;
}

int somaDiagonalPrincipal (int vet[5][5])
{
    int soma = 0;
    for (int i=0; i<5; i++)
    {
        soma += vet[i][i];
    }
    return soma;
}

int somaAcimaDiagonalPrincipal (int vet[5][5])
{
    int soma = 0;
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            if (j > i)
            {
                soma += vet[i][j];
            }
        }
    }
    return soma;
}

int somaAbaixoDiagonalPrincipal (int vet[5][5])
{
    int soma = 0;
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            if (j < i)
            {
                soma += vet[i][j];
            }
        }
    }
    return soma;
}
