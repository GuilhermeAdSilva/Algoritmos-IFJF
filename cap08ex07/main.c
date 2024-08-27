/*Codificar funções responsáveis pelos seguintes cálculos:
a) A temperatura mínima no mês.
b) A temperatura máxima no mês.
c) A temperatura média do mês.
d) Quantidade de dias com temperatura igual à mínima do mês.
e) Quantidade de dias com temperatura igual à máxima do mês.
f) Quantidade de dias com temperatura acima da média do mês.
g) Quantidade de dias com temperatura abaixo da média do mês.
Observação: considere o mês com 30 dias.*/


#include <stdio.h>
#include <stdlib.h>
#define MES 30

float temperaturaMinima (float temperaturas[MES]);
float temperaturaMaxima (float temperaturas[MES]);
float temperaturaMedia (float temperaturas[MES]);
int diasMinima (float temperaturas[MES]);
int diasMaxima (float temperaturas[MES]);
int diasAcimaMedia (float temperaturas[MES], float media);
int diasAbaixoMedia (float temperaturas[MES], float media);

int main()
{
    float temperaturas[MES] = {34.6, 29.4, 28.9, 34.6, 34.6, 29.7, 24.4, 27.4, 22.6, 17.5, 15.4, 15.2, 15.3, 15.4, 14.2, 11.8, 10.2, 4, 8, 4, 7.4, 10.5, 13.7, 14.9, 15.7, 16.8, 14, 18, 17.3, 14.7};
    printf("Temperatura minima: %.2f\n", temperaturaMinima(temperaturas));
    printf("Temperatura maxima: %.2f\n", temperaturaMaxima(temperaturas));
    printf("Temperatura media: %.2f\n", temperaturaMedia(temperaturas));
    printf("Dias de temperatura minima: %d\n", diasMinima(temperaturas));
    printf("Dias de temperatura maxima: %d\n", diasMaxima(temperaturas));
    printf("Dias acima da media: %d\n", diasAcimaMedia(temperaturas, temperaturaMedia(temperaturas)));
    printf("Dias abaixo da media: %d\n", diasAbaixoMedia(temperaturas, temperaturaMedia(temperaturas)));
    return 0;
}

float temperaturaMinima (float temperaturas[MES])
{
    float min = temperaturas[0];
    for (int i=0; i<MES; i++)
    {
        if (min > temperaturas[i])
        {
            min = temperaturas[i];
        }
    }
    return min;
}

float temperaturaMaxima (float temperaturas[MES])
{
    float max = temperaturas[0];
    for (int i=0; i<MES; i++)
    {
        if (max < temperaturas[i])
        {
            max = temperaturas[i];
        }
    }
    return max;
}

float temperaturaMedia (float temperaturas[MES])
{
    float media = 0;
    for (int i=0; i<MES; i++)
    {
        media += temperaturas[i];
    }
    media /= MES;
    return media;
}

int diasMinima (float temperaturas[MES])
{
    float minima = temperaturas[0];
    int cont = 0;
    for (int i=0; i<MES; i++)
    {
        if (temperaturas[i] < minima)
        {
            minima = temperaturas[i];
            cont = 1;
        }
        else if (temperaturas[i] == minima)
        {
            cont++;
        }
    }
    return cont;
}

int diasMaxima (float temperaturas[MES])
{
    float maxima = temperaturas[0];
    int cont = 0;
    for (int i=0; i<MES; i++)
    {
        if (temperaturas[i] > maxima)
        {
            maxima = temperaturas[i];
            cont = 1;
        }
        else if (temperaturas[i] == maxima)
        {
            cont++;
        }
    }
    return cont;
}

int diasAcimaMedia (float temperaturas[MES], float media)
{
    int cont = 0;
    for (int i=0; i<MES; i++)
    {
        if (temperaturas[i] > media)
        {
            cont++;
        }
    }
    return cont;
}

int diasAbaixoMedia (float temperaturas[MES], float media)
{
    int cont = 0;
    for (int i=0; i<MES; i++)
    {
        if (temperaturas[i] < media)
        {
            cont++;
        }
    }
    return cont;
}
