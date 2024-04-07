#include <stdio.h>
#include <stdlib.h>

void imprimeNumeros(int n1, int n2);

int main()
{
    int num1, num2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    imprimeNumeros(num1, num2);
    return 0;
}

void imprimeNumeros(int n1, int n2){
    if(n1 == n2){
        printf("Os numeros sao iguais");
    } else if(n1 > n2){
        while(n1 >= n2){
            printf("%d ", n2);
            n2++;
        }
    } else{
        while(n2 >= n1){
            printf("%d ", n1);
            n1++;
        }
    }
    return;
}
