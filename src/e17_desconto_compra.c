/*
 * Exercicio 17 - Desconto na compra
 * Ate R$ 100,00 -> sem desconto | ate R$ 500,00 -> 5% | acima de R$ 500,00 -> 10%
 */
#include <stdio.h>

int main(void)
{
    float valor, percentual, desconto;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);
    while (valor < 0) {
        printf("Valor invalido! Digite um valor positivo: R$ ");
        scanf("%f", &valor);
    }

    if (valor <= 100.0f) {
        percentual = 0;
    } else if (valor <= 500.0f) {
        percentual = 5;
    } else {
        percentual = 10;
    }

    desconto = valor * percentual / 100;

    printf("\nValor original: R$ %.2f\n", valor);
    printf("Percentual de desconto: %.0f%%\n", percentual);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valor - desconto);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
