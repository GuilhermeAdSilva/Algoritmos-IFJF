/*Codificar uma função capaz de verificar se um determinado número é primo. */

#include <stdio.h>
#include <stdlib.h>

int primo (int n);

int main()
{
    int x = primo(13);
    if (x == 1)
    {
        printf("Primo");
    }
    else
    {
        printf("Nao e primo");
    }
    return 0;
}

int primo (int n)
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
    if (x == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
