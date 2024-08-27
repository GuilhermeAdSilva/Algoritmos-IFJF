/*Codificar uma função capaz de criar uma sigla para cada nome fornecido. A
sigla deve ser composta da letra inicial de cada parte do nome. Veja exemplos
abaixo:
Jose da Silva => JdS
José Pedro Nogueira => JPN
Minas Gerais => MG
Goiás => G*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 30

void sigla (char vet[MAX]);
char aasigla (char vet[MAX]);

int main()
{
    char nome1[MAX] = {"Jose da Silva"};
    char nome2[MAX] = {"Jose Pedro Nogueira"};
    char nome3[MAX] = {"Minas Gerais"};
    char nome4[MAX] = {"Goias"};
    sigla(nome1);
    sigla(nome2);
    sigla(nome3);
    sigla(nome4);
    return 0;
}

void sigla (char vet[MAX])
{
    printf("%c", vet[0]);
    for (int i=0; i<MAX; i++)
    {
        if (vet[i] == ' ')
        {
            printf("%c", vet[i+1]);
        }
    }
    printf("\n");
    return 0;
}
