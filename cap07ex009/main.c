#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    int matricula, faltas;
    float nota1, nota2;
}Aluno;

void imprimeAluno (Aluno aluno);
int situacaoAluno (Aluno aluno);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Aluno aluno;
    printf("Número de matrícula: ");
    scanf("%d", &aluno.matricula);
    printf("Nota 1: ");
    scanf("%f", &aluno.nota1);
    printf("Nota 2: ");
    scanf("%f", &aluno.nota2);
    printf("Quantidade de faltas: ");
    scanf("%d", &aluno.faltas);
    imprimeAluno(aluno);
    return 0;
}

void imprimeAluno (Aluno aluno){
    printf("\nAluno %d, suas notas:\n", aluno.matricula);
    printf("Nota 1: %.2f\n", aluno.nota1);
    printf("Nota 2: %.2f\n", aluno.nota2);
    printf("Quantidade de faltas: %d\n", aluno.faltas);
    if(situacaoAluno(aluno) == 1){
        printf("Você está aprovado!");
    } else{
        printf("Você está reprovado!");
    }
    return;
}

int situacaoAluno (Aluno aluno){
    if(((aluno.nota1 + aluno.nota2) / 2) >= 6 && aluno.faltas < 15){
        return 1;
    } else{
        return 0;
    }
}
