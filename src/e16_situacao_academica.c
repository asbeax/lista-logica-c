/*
 * Exercicio 16 - Situacao academica
 * Media >= 7,0 -> Aprovado | >= 5,0 e < 7,0 -> Recuperacao | < 5,0 -> Reprovado
 */
#include <stdio.h>

int main(void)
{
    float n1, n2, media;

    printf("Digite a primeira nota (0 a 10): ");
    scanf("%f", &n1);
    while (n1 < 0 || n1 > 10) {
        printf("Nota invalida! Digite de 0 a 10: ");
        scanf("%f", &n1);
    }

    printf("Digite a segunda nota (0 a 10): ");
    scanf("%f", &n2);
    while (n2 < 0 || n2 > 10) {
        printf("Nota invalida! Digite de 0 a 10: ");
        scanf("%f", &n2);
    }

    media = (n1 + n2) / 2;
    printf("\nMedia: %.2f\n", media);

    if (media >= 7.0f) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 5.0f) {
        printf("Situacao: Recuperacao\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
