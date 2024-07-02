#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, erro = 0, resultado;
    printf("Informe um numero entre 1 a 10: ");
    scanf("%d", &n);
    for(int i=1; i<=10; i++)
    {
        printf("%d x %d = ", n, i);
        scanf("%d", &resultado);
        if (resultado != n*i)
        {
            erro++;
        }
    }
    printf("\nO gabarito e:\n");
    for(int j=1; j<=10; j++)
    {
        printf("%d x %d = %d\n", n, j, n*j);
    }
    if (erro == 0)
    {
        printf("\nExcelente!");
    }
    else if (erro == 1)
    {
        printf("\nEstude mais um pouquinho");
    }
    else if (erro == 2)
    {
        printf("\nEstude mais");
    }
    else
    {
        printf("\nEstude muito mais");
    }
    return 0;
}
