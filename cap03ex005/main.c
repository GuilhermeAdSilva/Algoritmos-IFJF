#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int base, expoente, potencia;
    printf("Informe a base e o expoente, respectivamente:\n");
    scanf("%d%d", &base , &expoente);
    potencia = pow(base,expoente);
    printf("O numero %d elevado ao expoente %d tem como resultado: %d", base, expoente, potencia);
    return 0;
}
