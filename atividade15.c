#include <stdio.h>

int main() {
    int assentos[3][4] = {
        {0, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 0}
    };
    int i, j;
    int ocupados = 0;
    int disponiveis = 0;

    printf("===== MAPA DOS ASSENTOS =====\n\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", assentos[i][j]);

            if (assentos[i][j] == 1) {
                ocupados++;
            } else {
                disponiveis++;
            }
        }
        printf("\n");
    }

    printf("\nAssentos ocupados: %d\n", ocupados);
    printf("Assentos disponiveis: %d\n", disponiveis);

    return 0;
}