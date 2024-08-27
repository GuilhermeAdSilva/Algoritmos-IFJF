//Codificar uma função capaz de validar a senha do usuário. Considere que a senha
//correta seja ALGORITMO.

#include <stdio.h>
#include <stdlib.h>
#define MAX 15

void validaSenha (char tentativa[MAX]);

int main()
{
    char tentativa1[MAX] = {"ALGORITMO"};
    validaSenha(tentativa1);
    char tentativa2[MAX] = {"algoritmo"};
    validaSenha(tentativa2);
    char tentativa3[MAX] = {"Algoritmo"};
    validaSenha(tentativa3);
    char tentativa4[MAX] = {"dfagfsdfghd"};
    validaSenha(tentativa4);
    char tentativa5[MAX] = {"GSDGDHJRT"};
    validaSenha(tentativa5);
    return 0;
}

void validaSenha (char tentativa[MAX])
{
    char senha[MAX] = {"ALGORITMO"};
    int validacao = 0;
    for (int i=0; i<MAX && senha[i] != '/0'; i++)
    {
        if (senha[i] != tentativa[i])
        {
            validacao++;
        }
    }
    if (validacao == 0)
    {
        printf("Senha correta\n");
    }
    else
    {
        printf("Senha incorreta\n");
    }
    return;
}
