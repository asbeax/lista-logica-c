/* Exercicio 26 - Media da turma */
#include <stdio.h>

int main(void)
{
    int qtd, i;
    float nota, soma = 0.0f;

    printf("Quantidade de alunos da turma: ");
    scanf("%d", &qtd);
    while (qtd <= 0) {
        printf("Valor invalido! Digite um numero maior que zero: ");
        scanf("%d", &qtd);
    }

    for (i = 1; i <= qtd; i++) {
        printf("Nota do aluno %d (0 a 10): ", i);
        scanf("%f", &nota);
        while (nota < 0 || nota > 10) {
            printf("Nota invalida! Digite de 0 a 10: ");
            scanf("%f", &nota);
        }
        soma += nota;
    }

    printf("\nMedia geral da turma: %.2f\n", soma / qtd);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
