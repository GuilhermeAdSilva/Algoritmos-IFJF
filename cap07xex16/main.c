#include <stdio.h>
#include <stdlib.h>

void imprime_triangulo (int tamanho);

int main()
{
    int tam;
    printf("Tamanho do triangulo: ");
    scanf("%d", &tam);
    imprime_triangulo(tam);
    return 0;
}

void imprime_triangulo (int tamanho)
{
    int controlador = 0;
    for (int i=1; i<=tamanho; i++){
        while (controlador != i){
            printf("*");
            controlador++;
        }
        controlador = 0;
        printf("\n");
    }
    return;
}
