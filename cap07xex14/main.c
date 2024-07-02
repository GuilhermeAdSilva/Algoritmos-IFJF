//Codificar uma função capaz de calcular a soma dos n primeiros termos de uma PA.
//ATENÇÃO: NÃO UTULIZE A FÓRMULA DA SOMA DE PA.

#include <stdio.h>
#include <stdlib.h>

int pa (int primeiro_termo, int razao, int n);

int main()
{
    int primeiro_termo, razao, n, soma;
    printf("Primeiro termo: ");
    scanf("%d", &primeiro_termo);
    printf("Razao: ");
    scanf("%d", &razao);
    printf("Quantidade de termos: ");
    scanf("%d", &n);
    soma = pa (primeiro_termo, razao, n);
    printf("A soma dos %d primeiros termos da PA e: %d", n, soma);
    getch();
    return 0;
}

int pa (int primeiro_termo, int razao, int n){
    int soma = 0;
    for (int i=0; i < n; i++){
        soma = soma + primeiro_termo + (razao*i);
    }
    return soma;
}
