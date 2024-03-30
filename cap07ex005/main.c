#include <stdio.h>
#include <stdlib.h>

void mesQuinzena (int dia, int mes);

int main()
{
    int dia, mes;
    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o numero do mes: ");
    scanf("%d", &mes);
    mesQuinzena(dia, mes);
    return 0;
}

void mesQuinzena (int dia, int mes){
    if (dia > 0 && dia <= 15){
        printf("O dia %d pertence a primeira quinzena", dia);
    } else if (dia > 15 && dia <= 31){
        printf("O dia %d pertence a segunda quinzena", dia);
    } else{
        printf("Dia invalido");
    }
    switch(mes){
    case 1:
        printf(" do mes de Janeiro");
            break;
    case 2:
        printf(" do mes de Fevereiro");
        break;
    case 3:
        printf(" do mes de Marco");
        break;
    case 4:
        printf(" do mes de Abril");
        break;
    case 5:
        printf(" do mes de Maio");
        break;
    case 6:
        printf(" do mes de Junho");
        break;
    case 7:
        printf(" do mes de Julho");
        break;
    case 8:
        printf(" do mes de Agosto");
        break;
    case 9:
        printf(" do mes de Setembro");
        break;
    case 10:
        printf(" do mes de Outubro");
        break;
    case 11:
        printf(" do mes de Novembro");
        break;
    case 12:
        printf(" do mes de Dezembro");
        break;
    default:
        printf(" do mes invalido");
    }
}
