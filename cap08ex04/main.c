//Codificar uma fun��o capaz de calcular a quantidade de candidatos classificados em
//um concurso p�blico. Sabe-se que s�o 1000 candidatos e que a pontua��o necess�ria
//para classifica��o deve ser maior ou igual a m�dia das pontua��es considerando
//todos os candidatos.


#include <stdio.h>
#include <stdlib.h>
#define MAX 5 //para 5 candidatos

int classificados (int candidato[MAX]);

int main()
{
    int candidato[MAX] = {1000, 200, 500, 900, 650};
    printf("A quantidade de classificados e: %d\n", classificados(candidato));
    return 0;
}

int classificados (int candidato[MAX])
{
    int cont = 0;
    float media = 0;
    for (int i=0; i<MAX; i++)
    {
        media += candidato[i];
    }
    media /= MAX;
    for (int j=0; j<MAX; j++)
    {
        if (candidato[j] >= media)
        {
            cont++;
        }
    }
    return cont;
}
