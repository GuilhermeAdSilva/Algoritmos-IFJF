#include <stdio.h>
#include <stdlib.h>

void tabuada(int numero);

int main()
{
    int n = 0;
    while(n<1 || n>10){
        printf("Digite um numero entre 1 a 10: ");
        scanf("%d", &n);
    }
    tabuada(n);
    return 0;
}

void tabuada(int numero){
    for(int x=0; x<=10; x++){
        printf("%d x %d = %d\n", x, numero, x*numero);
    }
    return;
}
