/*
 * Exercicio 31 - Posto de combustivel
 * Menos de 20 L -> sem desconto | de 20 a 40 L -> 3% | mais de 40 L -> 5%
 */
#include <stdio.h>

int main(void)
{
    float litros, preco, bruto, percentual, desconto;

    printf("Quantidade de litros abastecidos: ");
    scanf("%f", &litros);
    while (litros <= 0) {
        printf("Valor invalido! Digite um valor maior que zero: ");
        scanf("%f", &litros);
    }

    printf("Preco do litro: R$ ");
    scanf("%f", &preco);
    while (preco <= 0) {
        printf("Valor invalido! Digite um valor maior que zero: R$ ");
        scanf("%f", &preco);
    }

    if (litros < 20) {
        percentual = 0;
    } else if (litros <= 40) {
        percentual = 3;
    } else {
        percentual = 5;
    }

    bruto = litros * preco;
    desconto = bruto * percentual / 100;

    printf("\nValor bruto: R$ %.2f\n", bruto);
    printf("Desconto (%.0f%%): R$ %.2f\n", percentual, desconto);
    printf("Valor final: R$ %.2f\n", bruto - desconto);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
