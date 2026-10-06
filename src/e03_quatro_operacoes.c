/* Exercicio 3 - Quatro operacoes */
#include <stdio.h>

int main(void)
{
    float a, b;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    printf("\nSoma: %.2f\n", a + b);
    printf("Subtracao: %.2f\n", a - b);
    printf("Multiplicacao: %.2f\n", a * b);
    if (b != 0) {
        printf("Divisao: %.2f\n", a / b);
    } else {
        printf("Divisao: impossivel dividir por zero\n");
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
