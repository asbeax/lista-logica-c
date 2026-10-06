/* Exercicio 13 - Numero par ou impar */
#include <stdio.h>

int main(void)
{
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("O numero %d e par\n", n);
    } else {
        printf("O numero %d e impar\n", n);
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
