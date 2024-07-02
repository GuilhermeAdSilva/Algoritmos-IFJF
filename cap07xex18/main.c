#include <stdio.h>
#include <stdlib.h>

int fibonacci (int n);

int main()
{
    int n, fib;
    printf("Valor de n: ");
    scanf("%d", &n);
    fib = fibonacci(n);
    printf("O valor do termo %d na sequencia de Fibonacci e: %d", n, fib);
    return 0;
}

int fibonacci (int n)
{
    int a = 0, b = 1, resultado;
    if (n == 0)
    {
        return a;
    }
    else if (n == 1)
    {
        return b;
    }
    else
    {
        for (int i=1; i<n; i++)
        {
            resultado = a+b;
            if (i%2 == 0)
            {
                b = resultado;
            }
            else
            {
                a = resultado;
            }
        }
        return resultado;
    }
}
