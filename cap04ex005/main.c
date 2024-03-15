#include <stdio.h>
#include <stdlib.h>

void inverterNumero(int numero);

int main()
{
    int numero;
    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &numero);
    inverterNumero(numero);
    return 0;
}

void inverterNumero(int numero){
    int unidade, dezena, centena;
    printf("O numero %d invertido ", numero);
    unidade = numero%10;
    numero -= unidade;
    dezena = numero%100;
    dezena /= 10;
    numero -= dezena*10;
    centena = numero/100;
    printf("fica: %d%d%d", unidade, dezena, centena);
    return;
}
