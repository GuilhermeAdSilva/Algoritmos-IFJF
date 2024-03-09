#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void mensagem (int tempo);

int main()
{
    int tempo;
    printf("Informe o tempo em segundos: ");
    scanf("%d", &tempo);
    mensagem(tempo);
    return 0;
}

void mensagem (int tempo){
    printf("Programa em estado de espera por %d segundos", tempo);
    Sleep(tempo*1000);
}
