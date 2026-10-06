/* Exercicio 10 - Valor total da compra */
#include <stdio.h>

int main(void)
{
    char produto[50];
    int quantidade;
    float preco;

    printf("Nome do produto: ");
    scanf(" %49[^\n]", produto);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Preco unitario: R$ ");
    scanf("%f", &preco);

    printf("\nProduto: %s\n", produto);
    printf("Valor total da compra: R$ %.2f\n", quantidade * preco);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
