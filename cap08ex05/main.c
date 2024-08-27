//Codificar uma fun��o para calcular a quantidade de funcion�rios que possuem
//sal�rio igual ao maior sal�rio de uma empresa

#include <stdio.h>
#include <stdlib.h>
#define MAX 12

int quantia (float vet[MAX]);

int main()
{
    float vet[MAX] = {100, 200, 300, 300, 400, 200, 300, 500, 500, 300, 400, 500};
    printf("Quantidade de funcionarios que possuem salario igual ao maior salario da empresa: %d\n", quantia(vet));
    return 0;
}

int quantia (float vet[MAX])
{
    float maior = vet[0];
    int cont = 0;
    for (int i=0; i<MAX; i++)
    {
        if (maior < vet[i])
        {
            cont = 1;
            maior = vet[i];
        } else if (maior == vet[i])
        {
            cont++;
        }
    }
    return cont;
}
