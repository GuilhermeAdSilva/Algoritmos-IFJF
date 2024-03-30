#include <stdio.h>
#include <stdlib.h>

int quadrante (int angulo);

int main()
{
    int angulo;
    printf("Informe o angulo em graus: ");
    scanf("%d", &angulo);
    printf("O angulo de %d graus pertence ao %do quadrante", angulo, quadrante(angulo));
    return 0;
}

int quadrante (int angulo){
    int x;
    if (angulo > 360){
        x = angulo / 360;
        angulo = angulo - (360 * x);
    } else if (angulo < 0){
        x = (angulo * -1) % 360;
        angulo = 360 + (x * -1);
    }
    if (angulo >= 0 && angulo <= 90){
        return 1;
    } else if (angulo > 90 && angulo <= 180){
        return 2;
    } else if (angulo > 180 && angulo <= 270){
        return 3;
    } else {
        return 4;
    }
}
