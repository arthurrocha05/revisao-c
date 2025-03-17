#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno *prox;
} aluno_t;

aluno_t *aluno_root = NULL;

void inserir_aluno() {
    aluno_t *novo = (aluno_t*) malloc(sizeof(aluno_t));
    if (novo == NULL) return;

    printf("Nome: ");
    scanf("%99s", novo->nome);
    printf("Faltas: ");
    scanf("%d", &novo->faltas);
    printf("Nota: ");
    scanf("%f", &novo->nota);
    novo->prox = aluno_root;
    aluno_root = novo;
}

void exibir_alunos() {
    aluno_t *atual = aluno_root;
    while (atual) {
        printf("Aluno: %s, Faltas: %d, Nota: %.2f, %s\n",
               atual->nome, atual->faltas, atual->nota,
               atual->nota >= 6.0 ? "Aprovado" : "Reprovado");
        atual = atual->prox;
    }
}

int main() {
    inserir_aluno();
    inserir_aluno();
    exibir_alunos();
    return 0;
}