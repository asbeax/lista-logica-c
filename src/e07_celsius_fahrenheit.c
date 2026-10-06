/* Exercicio 7 - Conversao de temperatura: F = (C x 9/5) + 32 */
#include <stdio.h>

int main(void)
{
    float c, f;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &c);

    f = (c * 9.0f / 5.0f) + 32;
    printf("\n%.2f graus Celsius = %.2f graus Fahrenheit\n", c, f);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
