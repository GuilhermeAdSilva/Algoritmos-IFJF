#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void numeroAleatorio();

int main()
{
    numeroAleatorio();
    return 0;
}

void numeroAleatorio(){
    srand(time(NULL)); //semente pra função rand() não gerar sempre o mesmo valor
    int aleatorio = 1+(rand()%6);
    printf("Numero aleatorio entre 1 e 6: %d\n", aleatorio);
    return;
}
