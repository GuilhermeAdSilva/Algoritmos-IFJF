//com certeza tem uma maneira mais simples de fazer isso
//o codigo está lento, precisa ser refeito

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inverter(int num);

int main()
{
    int numero;
    printf("Digite um numero de 3 algarismos: ");
    scanf("%d", &numero);
    inverter(numero);
    return 0;
}

void inverter(int num){
    int uni, dez, cen;
    uni = num%10;
    num = num-uni;
    num = num/10;
    dez = num%10;
    num = num-dez;
    cen = num/10;

    int numeros[3] = {cen, dez, uni};

    srand(time(NULL));
    int a = (rand()%3);

    int b = a;
    while (b==a){
        srand(time(NULL));
        b = (rand()%3);
    }

    int c = a;
    while (c==a || c==b){
        srand(time(NULL));
        c = (rand()%3);
    }
    printf("Numero embaralhado: %d%d%d", numeros[a], numeros[b], numeros[c]);
}
