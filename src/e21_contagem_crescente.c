/* Exercicio 21 - Contagem crescente de 1 ate 10 */
#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
