#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //declara��o de vari�veis e configura��es
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, media;

    //entrada
    printf("Informe a Nota 1: ");
    scanf("%f", &nota1);
    printf("Informe a Nota 2: ");
    scanf("%f", &nota2);

    //processamento de dados
    media = (nota1 + nota2)/2;

    //sa�da
    printf("M�dia: %f", media);
    return 0;
}
