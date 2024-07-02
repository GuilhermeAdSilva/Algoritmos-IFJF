#include <stdio.h>
#include <stdlib.h>

void grafico (int temperatura);

int main()
{
    int temperatura;
    printf("Temperatura: ");
    scanf("%d", &temperatura);
    grafico(temperatura);
    return 0;
}

void grafico (int temperatura)
{
    if (temperatura > 0)
    {
        for(int i=0; i<temperatura; i++)
        {
            printf("+");
        }
    }
    else if (temperatura < 0)
    {
        for(int i=0; i>temperatura; i--)
        {
            printf("-");
        }
    }
    else
    {
        printf("0");
    }
    return;
}
