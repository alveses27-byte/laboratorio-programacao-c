#include <stdio.h>
#include <string.h>

/* Questao 2: cadastro de produtos de uma loja de informatica */
int main(void) {
    char produto[50];
    char categoria[20];
    char copia[50];
    char descricao[100] = "Produto: ";

    printf("===== CADASTRO DE PRODUTOS =====\n\n");

    printf("Nome do produto: ");
    scanf("%49s", produto);

    printf("Categoria: ");
    scanf("%19s", categoria);

    /* copia o nome do produto para outra variavel */
    strcpy(copia, produto);

    /* gera a descricao no formato Produto: Nome */
    strcat(descricao, copia);

    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", copia);
    printf("Caracteres: %zu\n", strlen(produto));

    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: Hardware\n");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("Categoria: Periferico\n");
    } else {
        printf("Categoria: Invalida\n");
    }

    printf("\nDescricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}
