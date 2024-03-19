#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeroAleatorio();

int main()
{
    int numero = numeroAleatorio();
    printf("Numero aleatorio entre 1 e 6: %d\n", numero);
    return 0;
}

int numeroAleatorio(){
    srand(time(NULL)); //semente pra função rand() não gerar sempre o mesmo valor
    int aleatorio = 1+(rand()%6);
    return aleatorio;
}
