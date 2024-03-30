#include <stdio.h>
#include <stdlib.h>

float calculaOperacao (float numA, float numB, char operador);

int main()
{
    float n1, n2, op, resultado;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite a operacao desejada: ");
    op = getche();
    printf("\nDigite o segundo numero: ");
    scanf("%f", &n2);
    resultado = calculaOperacao(n1, n2, op);
    printf("O resultado da operacao e %f", resultado);
    return 0;
}

float calculaOperacao (float numA, float numB, char operador){
    switch (operador){
    case '+':
        return numA+numB;
        break;
    case '-':
        return numA-numB;
        break;
    case '*':
        return numA*numB;
        break;
    case '/':
        return numA/numB;
        break;
    default:
        printf("Operador invalido");
    }
    return;
}
