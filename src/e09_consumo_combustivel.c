/* Exercicio 9 - Consumo medio em km/L */
#include <stdio.h>

int main(void)
{
    float km, litros;

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &km);

    printf("Digite o combustivel utilizado (litros): ");
    scanf("%f", &litros);
    while (litros <= 0) {
        printf("Valor invalido! Digite um valor maior que zero: ");
        scanf("%f", &litros);
    }

    printf("\nConsumo medio: %.2f km/L\n", km / litros);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
