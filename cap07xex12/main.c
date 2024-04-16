/*Fa�a uma fun��o que verifique se um valor (inteiro) � perfeito ou n�o. Um valor �
dito perfeito quando ele � igual � soma dos seus divisores, excluindo-o. (Ex: 6 �
perfeito porque 6 = 1 + 2 + 3, que s�o seus divisores). A fun��o deve retornar
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
