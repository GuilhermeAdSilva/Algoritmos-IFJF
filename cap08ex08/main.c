//Foi realizada uma pesquisa sobre algumas caracter�sticas f�sicas da popula��o de
//uma regi�o. Coletaram os seguintes dados referentes a cada habitante: sexo e idade.
//Fa�a uma fun��o capaz de determinar a quantidade de indiv�duos do sexo feminino
//cuja idade est� entre 18 e 35 anos, inclusive.

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
