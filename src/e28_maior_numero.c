/* Exercicio 28 - Maior numero entre 10 informados */
#include <stdio.h>

#define N 10

int main(void)
{
    int i;
    float numero, maior = 0.0f;

    for (i = 1; i <= N; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%f", &numero);

        if (i == 1 || numero > maior) {
            maior = numero;
        }
    }

    printf("\nO maior numero informado foi: %.2f\n", maior);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
