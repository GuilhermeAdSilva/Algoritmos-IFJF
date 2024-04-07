#include <stdio.h>
#include <stdlib.h>

void imprimirCaracter(char caracter, int quantidade);

int main()
{
    char caracter;
    int quantidade;
    printf("Caracter: ");
    caracter = getche();
    printf("\nQuantas vezes sera repetido: ");
    scanf("%d", &quantidade);
    imprimirCaracter(caracter, quantidade);
    return 0;
}

void imprimirCaracter(char caracter, int quantidade){
    while(quantidade > 0){
        printf("%c ", caracter);
        quantidade -= 1;
    }
    return;
}
