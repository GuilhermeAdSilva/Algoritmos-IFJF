/* Codificar uma função para calcular a quantidade de divisores de um número inteiro.*/

#include <stdio.h>
#include <stdlib.h>

int quantidadeDivisores (int n);

int main()
{
    printf("%d", quantidadeDivisores(10));
    return 0;
}

int quantidadeDivisores (int n)
{
    int x = 0, y = n;
    while (y > 0)
    {
        if (n%y == 0)
        {
            x++;
        }
        y--;
    }
    return x;
}
