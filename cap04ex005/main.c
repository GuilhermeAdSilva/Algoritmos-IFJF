#include <stdio.h>
#include <stdlib.h>

int inverterNumero(int numero);

int main()
{
    int numero, invertido;
    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &numero);
    invertido = inverterNumero(numero);
    printf("O numero invertido e: %d", invertido);
    return 0;
}

int inverterNumero(int numero){
    int unidade, dezena, centena, numeroInvertido;
    unidade = numero%10;
    dezena = ((numero%100) - unidade)/10;
    centena = numero/100;
    numeroInvertido = (unidade*100)+(dezena*10)+(centena);
    return numeroInvertido;
}
