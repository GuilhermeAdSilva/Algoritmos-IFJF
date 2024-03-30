#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int quinzenaDoDia (int diaDoMes);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int dia, quinzena;
    printf("Digite o dia do mês: ");
    scanf("%d", &dia);
    quinzena = quinzenaDoDia(dia);
    if (quinzena == 1 || quinzena == 2){
        printf("O dia %d pertence a %dº quinzena do mês.", dia, quinzena);
    } else{
        printf("Dia inválido!");
    }
    return 0;
}

int quinzenaDoDia (int diaDoMes){
    if (diaDoMes <= 15 && diaDoMes > 0){
        return 1;
    } else if(diaDoMes > 15 && diaDoMes <= 31){
        return 2;
    } else{
        return 0;
    }
}
