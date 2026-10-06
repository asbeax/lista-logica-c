/* Exercicio 24 - Tabuada de 1 ate 10 */
#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("\nTabuada do %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
