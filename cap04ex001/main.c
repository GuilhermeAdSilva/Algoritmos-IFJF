#include <stdio.h>
#include <stdlib.h>

int ferraduras (int cavalos);

int main()
{
    int x;
    printf("Informe a quantidade de cavalos: ");
    scanf("%d", &x);
    printf("A quantidade de ferraduras necessarias sera %d", ferraduras(x));
    return 0;
}

int ferraduras (int cavalos){
    return cavalos*4;
}
