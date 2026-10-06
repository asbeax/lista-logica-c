/* Exercicio 34 - Sistema de vendas */
#include <stdio.h>

int main(void)
{
    char produto[50];
    char resposta;
    int quantidade, vendas = 0, produtosVendidos = 0;
    float preco, totalVenda, faturamento = 0.0f, maiorVenda = 0.0f;

    printf("=== SISTEMA DE VENDAS ===\n");
    printf("\nDeseja registrar uma venda (S/N)? ");
    scanf(" %c", &resposta);

    while (resposta == 'S' || resposta == 's') {
        printf("Nome do produto: ");
        scanf(" %49[^\n]", produto);

        printf("Quantidade: ");
        scanf("%d", &quantidade);
        while (quantidade <= 0) {
            printf("Quantidade invalida! Digite um valor maior que zero: ");
            scanf("%d", &quantidade);
        }

        printf("Preco unitario: R$ ");
        scanf("%f", &preco);
        while (preco <= 0) {
            printf("Preco invalido! Digite um valor maior que zero: R$ ");
            scanf("%f", &preco);
        }

        totalVenda = quantidade * preco;
        vendas++;
        produtosVendidos += quantidade;
        faturamento += totalVenda;
        if (totalVenda > maiorVenda) {
            maiorVenda = totalVenda;
        }

        printf("Total da venda de %s: R$ %.2f\n", produto, totalVenda);

        printf("\nDeseja registrar outra venda (S/N)? ");
        scanf(" %c", &resposta);
    }

    printf("\n===== RESUMO DO DIA =====\n");
    printf("Quantidade de vendas realizadas: %d\n", vendas);
    printf("Quantidade total de produtos vendidos: %d\n", produtosVendidos);
    printf("Faturamento total: R$ %.2f\n", faturamento);
    if (vendas > 0) {
        printf("Maior venda realizada: R$ %.2f\n", maiorVenda);
    } else {
        printf("Maior venda realizada: nenhuma venda registrada\n");
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
