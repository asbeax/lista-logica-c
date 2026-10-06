/* Exercicio 20 - Calculadora com verificacao de divisao por zero */
#include <stdio.h>

int main(void)
{
    float a, b;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Digite a operacao (+, -, * ou /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("\nResultado: %.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("\nResultado: %.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("\nResultado: %.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b == 0) {
                printf("\nErro: divisao por zero nao e permitida!\n");
            } else {
                printf("\nResultado: %.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;
        default:
            printf("\nOperacao invalida!\n");
            break;
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
