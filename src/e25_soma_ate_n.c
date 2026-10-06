/* Exercicio 25 - Soma de 1 ate N */
#include <stdio.h>

int main(void)
{
    int n, i;
    long soma = 0;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);
    while (n <= 0) {
        printf("Valor invalido! Digite um numero positivo: ");
        scanf("%d", &n);
    }

    for (i = 1; i <= n; i++) {
        soma += i;
    }

    printf("\nA soma de 1 ate %d e: %ld\n", n, soma);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
