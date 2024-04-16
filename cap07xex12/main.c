/*Faça uma função que verifique se um valor (inteiro) é perfeito ou não. Um valor é
dito perfeito quando ele é igual à soma dos seus divisores, excluindo-o. (Ex: 6 é
perfeito porque 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar
verdadeiro ou falso.*/

#include <stdio.h>
#include <stdlib.h>

int perfeito (int n);

int main()
{
    int x = perfeito(6);
    if (x == 1)
    {
        printf("Perfeito");
    }
    else
    {
        printf("Nao e perfeito");
    }
    return 0;
}

int perfeito (int n)
{
    int x = 0, y = n;
    while (y > 0)
    {
        if (n%y == 0)
        {
            x+= y;
        }
        y--;
    }
    if (n == (x-n))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
