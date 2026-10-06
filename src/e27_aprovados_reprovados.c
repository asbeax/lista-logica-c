/* Exercicio 27 - Aprovados e reprovados (10 alunos, aprovado se nota >= 7) */
#include <stdio.h>

#define ALUNOS 10

int main(void)
{
    int i, aprovados = 0, reprovados = 0;
    float nota;

    for (i = 1; i <= ALUNOS; i++) {
        printf("Nota do aluno %d (0 a 10): ", i);
        scanf("%f", &nota);
        while (nota < 0 || nota > 10) {
            printf("Nota invalida! Digite de 0 a 10: ");
            scanf("%f", &nota);
        }

        if (nota >= 7) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    printf("\nQuantidade de aprovados: %d\n", aprovados);
    printf("Quantidade de reprovados: %d\n", reprovados);
    printf("Percentual de aprovacao: %.2f%%\n", (aprovados * 100.0f) / ALUNOS);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
