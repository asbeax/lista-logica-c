/* Exercicio 12 - Numero positivo, negativo ou zero */
#include <stdio.h>

int main(void)
{
    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n > 0) {
        printf("O numero e positivo\n");
    } else if (n < 0) {
        printf("O numero e negativo\n");
    } else {
        printf("O numero e zero\n");
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
