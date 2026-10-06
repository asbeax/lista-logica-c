/* Exercicio 2 - Soma de dois numeros */
#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);

    printf("\nPrimeiro numero: %d\n", n1);
    printf("Segundo numero: %d\n", n2);
    printf("Soma: %d\n", n1 + n2);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
