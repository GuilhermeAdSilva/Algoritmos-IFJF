#include <stdio.h>
#include <stdlib.h>

int sequenciaFibonacci (int termo);

int main()
{
    printf("%d\n", sequenciaFibonacci(0));
    printf("%d\n", sequenciaFibonacci(1));
    printf("%d\n", sequenciaFibonacci(2));
    printf("%d\n", sequenciaFibonacci(3));
    printf("%d\n", sequenciaFibonacci(4));
    printf("%d\n", sequenciaFibonacci(5));
    printf("%d\n", sequenciaFibonacci(6));
    printf("%d\n", sequenciaFibonacci(7));
    printf("%d\n", sequenciaFibonacci(8));
    printf("%d\n", sequenciaFibonacci(9));
    return 0;
}

int sequenciaFibonacci (int termo)
{
    int n1 = 0, n2 = 1, valor = 1, contador = 1;
    if (termo == 0)
    {
        return 0;
    }
    while (contador < termo)
    {
        valor = n1 + n2;
        n1 = n2;
        n2 = valor;
        contador++;
    }
    return valor;
}
