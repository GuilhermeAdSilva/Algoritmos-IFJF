#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void numeroAleatorio(int n);

int main()
{
    int x;
    printf("Defina o valor maximo: ");
    scanf("%d", &x);
    numeroAleatorio(x);
    return 0;
}

void numeroAleatorio(int n){
    srand(time(NULL));
    int aleatorio = 1+(rand()%n);
    printf("Numero aleatorio entre 1 e %d: %d", n, aleatorio);
}
