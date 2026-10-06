/* Exercicio 14 - Maior entre dois numeros (diferentes) */
#include <stdio.h>

int main(void)
{
    float a, b;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero (diferente do primeiro): ");
    scanf("%f", &b);
    while (b == a) {
        printf("Os numeros devem ser diferentes! Digite novamente o segundo: ");
        scanf("%f", &b);
    }

    if (a > b) {
        printf("\nO maior numero e: %.2f\n", a);
    } else {
        printf("\nO maior numero e: %.2f\n", b);
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
