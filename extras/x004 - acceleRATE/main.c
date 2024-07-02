//https://www.charlieintel.com/ea-sports-fc/all-ea-sports-fc-24-acceleration-types-explained-261746/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void acc ();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    acc();
    getche();
    return 0;
}

void acc ()
{
    int altura, agilidade, forca, aceleracao, dif;
    printf("Explosive: aceleram mais rápido, mas diminuem a velocidade ao longo do tempo.\n");
    printf("Lengthy: demoram um pouco para acelerar, mas se destacam em longas distâncias.\n");
    printf("Controlled: os jogadores usam o seu ritmo de uma forma \"balanceada e controlada\".\n\n");
    printf("Altura em cm: ");
    scanf("%d", &altura);
    printf("Agilidade: ");
    scanf("%d", &agilidade);
    printf("Forca: ");
    scanf("%d", &forca);
    printf("Aceleracao: ");
    scanf("%d", &aceleracao);
    dif = agilidade - forca;
    if (dif < 0)
    {
        dif *= -1;
    }
    if((altura >= 188) && (forca >= 80) && (aceleracao >= 55) && (dif >=20) && (forca > agilidade)){
        printf("Lengthy (Pure)");
    } else if((altura >= 183) && (forca >= 75) && (aceleracao >= 55) && (dif >=12) && (forca > agilidade)){
        printf("Mostly Lengthy (70%% Lengthy, 30%% Controlled)");
    } else if((altura >= 181) && (forca >= 65) && (aceleracao >= 40) && (dif >=4) && (forca > agilidade)){
        printf("Controlled Lengthy (50%% Lengthy, 50%% Controlled)");
    } else if((altura <= 175) && (agilidade >= 80) && (aceleracao >= 80) && (dif >=20) && (forca < agilidade)){
        printf("Explosive (Pure)");
    } else if((altura <= 182) && (agilidade >= 70) && (aceleracao >= 80) && (dif >=12) && (forca < agilidade)){
        printf("Mostly Explosive (70%% Explosive, 30%% Controlled)");
    } else if((altura <= 182) && (agilidade >= 65) && (aceleracao >= 70) && (dif >=4) && (forca < agilidade)){
        printf("Controlled Explosive (50%% Explosive, 50%% Controlled)");
    } else{
        printf("Controlled");
    }
    return;
}
