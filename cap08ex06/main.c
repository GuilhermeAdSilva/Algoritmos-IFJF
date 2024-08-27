//Codificar uma função para calcular a quantidade de alunos que obtiveram nota
//acima da média da turma.

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int alunosAcimaDaMedia (float notas[MAX]);

int main()
{
    float notas[MAX] = {6.0, 7.5, 5.2, 4.9, 9.5};
    printf("A quantidade de alunos com media superior a media e %d", alunosAcimaDaMedia(notas));
    return 0;
}

int alunosAcimaDaMedia (float notas[MAX])
{
    int cont = 0;
    float media = 0;
    for (int i=0; i<MAX; i++)
    {
        media += notas[i];
    }
    media /= MAX;
    for (int j=0; j<MAX; j++)
    {
        if (notas[j] > media)
        {
            cont++;
        }
    }
    return cont;
}
