#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void jogo();

int main()
{
    jogo();
    return 0;
}

void jogo(){
    srand(time(NULL));
    int a = rand(), b, n = 1;
    printf("Tente advinhar o numero: ");
    scanf("%d", &b);
    while (a != b){
        if (b > a){
            printf("%d e maior que o numero sorteado, tente novamente: ", b);
        } else {
            printf("%d e menor que o numero sorteado, tente novamente: ", b);
        }
        scanf("%d", &b);
        n++;
    }
    printf("Voce acertou o numero %d em %d tentativa(s).", a, n);
}
