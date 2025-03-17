#include <stdio.h>

int main()
{
    float nota;
    int porcentagem_faltas; 

    printf("Ola estudante, qual sua nota? ");
    scanf("%f", &nota);
    
    printf("\nQual sua porcentagem de frequencia (Sem simbolos)? ");
    scanf("%d", &porcentagem_faltas);

    if (nota >= 7 && porcentagem_faltas >= 75) {
        printf("Parabens, voce esta aprovado!\n");
    } else {
        printf("Voce esta reprovado!\n");
    }   

    return 0;
}
