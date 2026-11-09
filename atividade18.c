
#include <stdio.h>

void exibirMenu() {

    printf("Escolha uma operacao:\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");

}

int main() {
    exibirMenu();

    int opcao;
    int numero1, numero2, resultado;

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    switch (opcao) {
        case 1:
            resultado = numero1 + numero2;
            printf("Resultado da soma: %d\n", resultado);
            break;

        case 2:
            resultado = numero1 - numero2;
            printf("Resultado da subtracao: %d\n", resultado);
            break;

        case 3:
            resultado = numero1 * numero2;
            printf("Resultado da multiplicacao: %d\n", resultado);
            break;

        case 4:
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                printf("Resultado da divisao: %d\n", resultado);
            } else {
                printf("Erro: divisao por zero nao permitida.\n");
            }
            break;

        default:
            printf("Opcao invalida.\n");
            break;
    }

    
    return 0;
}
