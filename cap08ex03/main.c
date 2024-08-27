//Codificar uma função capaz de calcular a quantidade de candidatos classificados em
//um concurso público. Sabe-se que são 1000 candidatos e que a pontuação necessária
//para classificação deve ser maior ou igual a 650

#include <stdio.h>
#include <stdlib.h>
#define MAX 5 //para 5 candidatos

int classificados (int candidato[MAX]);

int main()
{
    int candidato[MAX] = {1000, 650, 300, 600, 700};
    printf("A quantidade de classificados e: %d\n", classificados(candidato));
    return 0;
}

int classificados (int candidato[MAX])
{
    int cont = 0;
    for (int i=0; i<MAX; i++)
    {
        if (candidato[i] >= 650)
        {
            cont++;
        }
    }
    return cont;
}
