/* Exercicio 35 - Sistema academico (2 avaliacoes por aluno) */
#include <stdio.h>

int main(void)
{
    char nome[50];
    int qtd, i, aprovados = 0, recuperacao = 0, reprovados = 0;
    float n1, n2, media, somaMedias = 0.0f, maiorMedia = 0.0f, menorMedia = 0.0f;

    printf("Quantidade de alunos: ");
    scanf("%d", &qtd);
    while (qtd <= 0) {
        printf("Valor invalido! Digite um numero maior que zero: ");
        scanf("%d", &qtd);
    }

    for (i = 1; i <= qtd; i++) {
        printf("\n--- Aluno %d de %d ---\n", i, qtd);

        printf("Nome: ");
        scanf(" %49[^\n]", nome);

        printf("Nota da primeira avaliacao (0 a 10): ");
        scanf("%f", &n1);
        while (n1 < 0 || n1 > 10) {
            printf("Nota invalida! Digite de 0 a 10: ");
            scanf("%f", &n1);
        }

        printf("Nota da segunda avaliacao (0 a 10): ");
        scanf("%f", &n2);
        while (n2 < 0 || n2 > 10) {
            printf("Nota invalida! Digite de 0 a 10: ");
            scanf("%f", &n2);
        }

        media = (n1 + n2) / 2;
        somaMedias += media;

        if (i == 1 || media > maiorMedia) {
            maiorMedia = media;
        }
        if (i == 1 || media < menorMedia) {
            menorMedia = media;
        }

        printf("%s - Media: %.2f - ", nome, media);
        if (media >= 7) {
            printf("Aprovado\n");
            aprovados++;
        } else if (media >= 5) {
            printf("Recuperacao\n");
            recuperacao++;
        } else {
            printf("Reprovado\n");
            reprovados++;
        }
    }

    printf("\n===== RESULTADO DA TURMA =====\n");
    printf("Quantidade de alunos: %d\n", qtd);
    printf("Aprovados: %d\n", aprovados);
    printf("Em recuperacao: %d\n", recuperacao);
    printf("Reprovados: %d\n", reprovados);
    printf("Media geral da turma: %.2f\n", somaMedias / qtd);
    printf("Maior media: %.2f\n", maiorMedia);
    printf("Menor media: %.2f\n", menorMedia);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
