/*Faça uma função que receba 3 valores reais e retorne o valor intermediário entre eles, isto é, o valor que
não é o maior e nem o menor. Você pode assumir, sem verificar, que os valores digitados serão distintos.
É obrigatório o uso de ELSE na função. Crie um programa para ler os valores do teclado, chamar esta
função e imprimir o valor retornado.*/

#include <stdio.h>
#include <stdlib.h>

float valorIntermediario(float x1, float x2, float x3);

int main()
{
    float v1, v2, v3, intermediario;
    printf("Digite os 3 valores: ");
    scanf("%f%f%f", &v1, &v2, &v3);
    intermediario = valorIntermediario(v1, v2, v3);
    printf("%f e o valor intermediario entre %f, %f e %f", intermediario, v1, v2, v3);
    return 0;
}

float valorIntermediario(float x1, float x2, float x3){
    if ((x1 > x2 && x1 < x3) || (x1 < x2 && x1 > x3)){
        return x1;
    } else if ((x2 > x1 && x2 < x3) || (x2 < x1 && x2 > x3)){
        return x2;
    } else{
        return x3;
    }
}
