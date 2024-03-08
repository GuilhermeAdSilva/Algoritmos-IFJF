#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5))/10;
    printf("A media ponderada das notas do aluno e: %f", media);
    return 0;
}
