#include <stdio.h>

/* Exercicio 2: notas de 3 alunos em 2 provas e media de cada aluno */
int main() {
    float notas[3][2];
    float media;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Aluno %d - digite a nota da prova %d: ", i + 1, j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\n--- Medias ---\n");
    for (int i = 0; i < 3; i++) {
        media = (notas[i][0] + notas[i][1]) / 2;
        printf("Aluno %d: %.2f\n", i + 1, media);
    }
    return 0;
}
