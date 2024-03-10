/*Uma empresa fará o reajuste do salário de seus funcionários no próximo mês. O reajuste será realizado
da seguinte forma: programadores (identificados por ‘P’) receberão 15% de reajuste; trainees (identificados
por ‘T’) receberão 10%; engenheiros (‘E’) com salário inferior a R$ 5000,00 receberão 7%; os demais
trabalhadores (incluindo engenheiros que não se enquadram no caso anterior) receberão 5% de aumento.
a) Elabore uma função que receba como parâmetros um valor real e um caractere, representando o salário
atual e o cargo de um funcionário, respectivamente. A função deverá calcular e imprimir o valor do salário
do funcionário após o reajuste.
b) Faça um programa que leia o salário atual e o cargo de cada um dos funcionários da empresa, até que
seja digitado um valor negativo para o salário. A função do item a deverá ser chamada para calcular o novo
salário de cada funcionário.*/

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
    cargo = getche(); //getche() só le caracter e nao precisa do enter (nao precisa preocupar com buffer)
    //scanf(" %c", &cargo); //espaço entre " e % para limpeza de buffer do teclado.
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
