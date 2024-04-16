/*Sabe-se que um investimento financeiro rende determinado juros mensais.
Codificar uma fun��o para calcular o saldo final ap�s decorrer alguns meses.
Considere um aporte mensal e constante durante todo o per�odo do investimento.*/

#include <stdio.h>
#include <stdlib.h>

float saldo (float aporte, float juros, int meses);

int main()
{
    float x = saldo(100, 10, 3);
    printf("R$%.2f", x);
    return 0;
}

float saldo (float aporte, float juros, int meses)
{
    juros /= 100;
    while (meses >= 1)
    {
        aporte += (aporte*juros);
        meses--;
    }
    return aporte;
}
