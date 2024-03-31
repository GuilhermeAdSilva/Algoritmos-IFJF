#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float raiz1, raiz2;
}Raizes;

Raizes equacaoSegundoGrau(int a, int b, int c);
int delta (int a, int b, int c);

int main()
{
    int a, b, c, d;
    printf("Valor de a: ");
    scanf("%d", &a);
    printf("Valor de b: ");
    scanf("%d", &b);
    printf("Valor de c: ");
    scanf("%d", &c);
    d = delta(a, b, c);
    Raizes raizes;
    raizes = equacaoSegundoGrau(a, b, c);
    if(d == 0){
        printf("A equacao nao possui raizes reais");
    } else if(d == 1){
        printf("A equacao possui raizes reais identicas que valem %f", raizes.raiz1);
    } else{
        printf("A equacao possui raizes reais distintas que valem %f e %f", raizes.raiz1, raizes.raiz2);
    }
    return 0;
}

Raizes equacaoSegundoGrau(int a, int b, int c){
    Raizes r;
    r.raiz1 = ((-1*b)+sqrt((pow(b,2)) - (4*a*c)))/(2*a);
    r.raiz2 = ((-1*b)-sqrt((pow(b,2)) - (4*a*c)))/(2*a);
    return r;
}

int delta (int a, int b, int c){
    if(((pow(b,2)) - (4*a*c)) < 0){
        return 0;
    } else if (((pow(b,2)) - (4*a*c))==0){
        return 1;
    } else{
        return 2;
    }
}
