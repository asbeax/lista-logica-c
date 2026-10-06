/* Exercicio 1 - Saudacao */
#include <stdio.h>

int main(void)
{
    char nome[50];

    printf("Digite seu nome: ");
    scanf(" %49[^\n]", nome);

    printf("Ola, %s! Seja bem-vindo(a) a disciplina de Logica de Programacao.\n", nome);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
