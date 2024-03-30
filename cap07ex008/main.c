#include <stdio.h>
#include <stdlib.h>

int classificaTriangulo (float x, float y, float z);

int main()
{
    float a, b ,c;
    int classificacao;
    printf("Informe o primeiro lado: ");
    scanf("%f", &a);
    printf("Informe o segundo lado: ");
    scanf("%f", &b);
    printf("Informe o terceiro lado: ");
    scanf("%f", &c);
    classificacao = classificaTriangulo(a, b, c);
    switch(classificacao){
    case 0:
        printf("Nao e um triangulo");
        break;
    case 1:
        printf("O triangulo formado e escaleno");
        break;
    case 2:
        printf("O triangulo formado e isosceles");
        break;
    case 3:
        printf("O triangulo formado e equilatero");
        break;
    default:
        printf("ERRO!");
    }
    return 0;
}

int classificaTriangulo (float x, float y, float z){
    if((x+y < z) || (x+z < y) || (y+z < x) || (x <= 0) || (y <= 0) || (z <= 0))
        {
        return 0;
    } else{
        if((x == y) && (x == z)){
            return 3;
        } else if((x != y) && (x != z) && (y != z)){
            return 1;
        } else{
            return 2;
        }
    }
}
