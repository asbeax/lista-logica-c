/*
 * Exercicio 32 - Sistema de estacionamento
 * Horas inteiras (0 a 23), no mesmo dia.
 * Primeira hora: R$ 10,00 | demais horas: R$ 5,00 por hora.
 */
#include <stdio.h>

int main(void)
{
    int entrada, saida, horas;
    float total;

    printf("Hora de entrada (0 a 23): ");
    scanf("%d", &entrada);
    while (entrada < 0 || entrada > 23) {
        printf("Hora invalida! Digite de 0 a 23: ");
        scanf("%d", &entrada);
    }

    printf("Hora de saida (0 a 23, maior que a entrada): ");
    scanf("%d", &saida);
    while (saida < 0 || saida > 23 || saida <= entrada) {
        printf("Hora invalida! Digite de 0 a 23, maior que %d: ", entrada);
        scanf("%d", &saida);
    }

    horas = saida - entrada;
    total = 10.00f + (horas - 1) * 5.00f;

    printf("\nTempo de permanencia: %d hora(s)\n", horas);
    printf("Valor total: R$ %.2f\n", total);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
