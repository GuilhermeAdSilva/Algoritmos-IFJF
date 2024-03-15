#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeroAleatorio(int num);

int main()
{
    int valorMaximo, numeroGerado;
    printf("Defina o valor maximo: ");
    scanf("%d", &valorMaximo);
    numeroGerado = numeroAleatorio(valorMaximo);
    printf("Numero aleatorio entre 1 e %d: %d", valorMaximo, numeroGerado);
    return 0;
}

int numeroAleatorio(int num){
    srand(time(NULL));
    int aleatorio = 1+(rand()%num);
    return aleatorio;
}
