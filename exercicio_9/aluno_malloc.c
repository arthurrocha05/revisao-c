#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

int main() {
    aluno_t *aluno = (aluno_t*) malloc(sizeof(aluno_t));
    if (aluno == NULL) return 1;

    printf("Nome: ");
    scanf("%99s", aluno->nome);
    printf("Faltas: ");
    scanf("%d", &aluno->faltas);
    printf("Nota: ");
    scanf("%f", &aluno->nota);

    printf("Aluno: %s, Faltas: %d, Nota: %.2f\n", aluno->nome, aluno->faltas, aluno->nota);
    printf("%s\n", aluno->nota >= 6.0 ? "Aprovado" : "Reprovado");

    free(aluno);
    return 0;
}