#include <stdio.h>
#include <string.h>

/* Questao 3: identificacao academica de estudantes */
int main(void) {
    char nome[50];
    char curso[10];
    char copia[50];
    char mensagem[100] = "Ola, ";

    printf("===== IDENTIFICACAO ACADEMICA =====\n\n");

    printf("Nome do estudante: ");
    scanf("%49s", nome);

    printf("Codigo do curso: ");
    scanf("%9s", curso);

    /* armazena o nome em outra variavel */
    strcpy(copia, nome);

    /* monta a mensagem Ola, Nome! */
    strcat(mensagem, copia);
    strcat(mensagem, "!");

    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s\n", copia);

    if (strcmp(curso, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else if (strcmp(curso, "SI") == 0) {
        printf("Curso: Sistemas de Informacao\n");
    } else {
        printf("Curso: Codigo invalido\n");
    }

    printf("Caracteres no nome: %zu\n", strlen(nome));

    printf("\n%s\n", mensagem);

    return 0;
}
