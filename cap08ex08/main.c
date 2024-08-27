//Foi realizada uma pesquisa sobre algumas características físicas da população de
//uma região. Coletaram os seguintes dados referentes a cada habitante: sexo e idade.
//Faça uma função capaz de determinar a quantidade de indivíduos do sexo feminino
//cuja idade está entre 18 e 35 anos, inclusive.

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct
{
    int idade;
    char sexo;
}Estrutura;

int individuos (Estrutura estrutura[MAX]);

int main()
{
    Estrutura estrutura[MAX];
    int quantidade;
    for (int i = 0; i < MAX; i++)
    {
        printf("Sexo: ");
        estrutura[i].sexo = getchar();
        printf("\nIdade: ");
        scanf("%d", &estrutura[i].idade);
    }
    quantidade = individuos(estrutura);
    printf("A quantidade e: %d", quantidade);
    return 0;
}

int individuos (Estrutura estrutura[MAX])
{
    int cont = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (estrutura[i].idade >= 18 && estrutura[i].idade <= 35 && estrutura[i].sexo == 'F')
        {
            cont++;
        }
    }
    return cont;
}
