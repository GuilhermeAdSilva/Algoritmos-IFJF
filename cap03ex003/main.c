#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{
    int tempo;
    printf("Informe o tempo em segundos: ");
    scanf("%d", &tempo);
    printf("Programa em estado de espera por %d segundos", tempo);
    Sleep(tempo*1000);
    return 0;
}
