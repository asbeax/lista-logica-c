/* Exercicio 4 - Media do aluno: (N1 + N2 + N3) / 3 */
#include <stdio.h>

int main(void)
{
    float n1, n2, n3, media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;
    printf("\nMedia final: %.2f\n", media);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
