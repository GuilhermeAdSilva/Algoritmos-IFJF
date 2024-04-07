#include <stdio.h>
#include <stdlib.h>

int anos(float alt_ze, float cre_ze, float alt_chico, float cre_chico);

int main()
{
    float alt_ze, cre_ze, alt_chico, cre_chico;
    printf("Altura de ze em cm: ");
    scanf("%f", &alt_ze);
    printf("Crescimento de ze em cm: ");
    scanf("%f", &cre_ze);
    printf("Altura de chico em cm: ");
    scanf("%f", &alt_chico);
    printf("Crescimento de chico em cm: ");
    scanf("%f", &cre_chico);
    printf("Serao necessarios: %d anos", anos(alt_ze, cre_ze, alt_chico, cre_chico));
    return 0;
}

int anos(float alt_ze, float cre_ze, float alt_chico, float cre_chico){
    int x = 0;
    while(alt_ze >= alt_chico){
        alt_ze += cre_ze;
        alt_chico += cre_chico;
        x++;
    }
    return x;
}
