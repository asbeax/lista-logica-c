/* Exercicio 6 - Area do circulo: Area = PI x raio^2, com PI = 3,14159 */
#include <stdio.h>

#define PI 3.14159f

int main(void)
{
    float raio;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    printf("\nArea do circulo: %.2f\n", PI * raio * raio);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
