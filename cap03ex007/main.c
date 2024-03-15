#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float custoFabrica, porcentagemDistribuidor, porcentagemImpostos;
    printf("Preco de fabrica: ");
    scanf("%f", &custoFabrica);
    printf("Porcentagem do distribuidor: ");
    scanf("%f", &porcentagemDistribuidor);
    porcentagemDistribuidor = custoFabrica * porcentagemDistribuidor / 100;
    printf("Porcentagem dos impostos: ");
    scanf("%f", &porcentagemImpostos);
    porcentagemImpostos = custoFabrica * porcentagemImpostos / 100;
    printf("O custo do carro ao consumidor sera: R$ %.2f", (custoFabrica + porcentagemDistribuidor + porcentagemImpostos));
    return 0;
}
