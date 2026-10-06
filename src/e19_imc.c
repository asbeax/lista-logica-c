/*
 * Exercicio 19 - Calculo do IMC (peso / altura^2)
 * < 18,5 abaixo do peso | 18,5 a 24,9 adequado | 25,0 a 29,9 sobrepeso | >= 30,0 obesidade
 */
#include <stdio.h>

int main(void)
{
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    while (peso <= 0) {
        printf("Peso invalido! Digite um valor maior que zero: ");
        scanf("%f", &peso);
    }

    printf("Digite a altura (m, ex: 1.75): ");
    scanf("%f", &altura);
    while (altura <= 0) {
        printf("Altura invalida! Digite um valor maior que zero: ");
        scanf("%f", &altura);
    }

    imc = peso / (altura * altura);
    printf("\nIMC: %.1f\n", imc);

    if (imc < 18.5f) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc < 25.0f) {
        printf("Classificacao: Peso adequado\n");
    } else if (imc < 30.0f) {
        printf("Classificacao: Sobrepeso\n");
    } else {
        printf("Classificacao: Obesidade\n");
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
