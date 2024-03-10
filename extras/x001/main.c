/*Fa�a uma fun��o que receba 3 valores reais e retorne o valor intermedi�rio entre eles, isto �, o valor que
n�o � o maior e nem o menor. Voc� pode assumir, sem verificar, que os valores digitados ser�o distintos.
� obrigat�rio o uso de ELSE na fun��o. Crie um programa para ler os valores do teclado, chamar esta
fun��o e imprimir o valor retornado.*/

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
