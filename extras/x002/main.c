/*Uma empresa far� o reajuste do sal�rio de seus funcion�rios no pr�ximo m�s. O reajuste ser� realizado
da seguinte forma: programadores (identificados por �P�) receber�o 15% de reajuste; trainees (identificados
por �T�) receber�o 10%; engenheiros (�E�) com sal�rio inferior a R$ 5000,00 receber�o 7%; os demais
trabalhadores (incluindo engenheiros que n�o se enquadram no caso anterior) receber�o 5% de aumento.
a) Elabore uma fun��o que receba como par�metros um valor real e um caractere, representando o sal�rio
atual e o cargo de um funcion�rio, respectivamente. A fun��o dever� calcular e imprimir o valor do sal�rio
do funcion�rio ap�s o reajuste.
b) Fa�a um programa que leia o sal�rio atual e o cargo de cada um dos funcion�rios da empresa, at� que
seja digitado um valor negativo para o sal�rio. A fun��o do item a dever� ser chamada para calcular o novo
sal�rio de cada funcion�rio.*/

#include <stdio.h>
#include <stdlib.h>

void reajuste(float salario, char cargo);

int main()
{
    float salario;
    char cargo;
    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    printf("Digite o cargo: ");
    cargo = getche(); //getche() s� le caracter e nao precisa do enter (nao precisa preocupar com buffer)
    //scanf(" %c", &cargo); //espa�o entre " e % para limpeza de buffer do teclado.
    printf("\n");
    reajuste(salario, cargo);
    return 0;
}

void reajuste(float salario, char cargo){
    if(cargo == 'P'){
        salario *= 1.15;
    } else if(cargo == 'T'){
        salario *= 1.1;
    } else if(cargo == 'E' && salario < 5000){
        salario *= 1.07;
    } else{
        salario *= 1.05;
    }
    printf("O novo salario apos reajuste sera: %.2f", salario);
}
