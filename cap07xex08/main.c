/*Sabe-se que um investimento financeiro rende determinado juros mensais.
Codificar uma função para calcular a quantidade de meses necessários para que um
determinado aporte mensal e constante durante todo o período do investimento,
alcance o valor final desejado.*/

#include <stdio.h>
#include <stdlib.h>

int meses (float aporte, float juros, float valorFinal);

int main()
{
    int x = meses(100, 20, 200);
    printf("%d meses\n", x);
    return 0;
}

int meses (float aporte, float juros, float valorFinal){
    juros /= 100;
    int count = 0;
    while (aporte < valorFinal){
        aporte += (aporte*juros);
        count++;
    }
    return count;
}
