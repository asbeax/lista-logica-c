/* Exercicio 22 - Contagem regressiva de 10 ate 0 */
#include <stdio.h>

int main(void)
{
    int i;

    for (i = 10; i >= 0; i--) {
        printf("%d\n", i);
    }
    printf("Fim da contagem!\n");

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
