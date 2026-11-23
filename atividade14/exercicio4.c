#include <stdio.h>

/* Exercicio 4: matriz 3x3 e identificacao do maior valor */
int main() {
    int matriz[3][3];
    int maior;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("\nMaior valor armazenado: %d\n", maior);
    return 0;
}
