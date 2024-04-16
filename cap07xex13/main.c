/*Codificar uma função para calcular o fatorial de um número.*/

#include <stdio.h>
#include <stdlib.h>

int fatorial (int numero);

int main()
{
    printf("%d\n", fatorial(4));
    printf("%d\n", fatorial(1));
    printf("%d\n", fatorial(0));
    printf("%d\n", fatorial(-5));
    printf("%d\n", fatorial(2));
    return 0;
}

int fatorial (int numero){
    if(numero < 0){
        printf("NUMERO INVALIDO ");
        return;
    }
    for(int x=numero-1; x>0; x--){
        numero*=x;
    }
    return numero;
}
