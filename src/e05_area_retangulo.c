/* Exercicio 5 - Area do retangulo: Area = Base x Altura */
#include <stdio.h>

int main(void)
{
    float base, altura;

    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("\nArea do retangulo: %.2f\n", base * altura);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
