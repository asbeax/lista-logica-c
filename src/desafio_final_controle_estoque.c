/*
 * Desafio Final - Controle de estoque
 *
 * Cadastro de produtos, entrada e saida de mercadorias, listagem do estoque
 * e relatorio com valor total e produtos que precisam de reposicao.
 * O codigo do produto e a ordem em que ele foi cadastrado (1, 2, 3...).
 */
#include <stdio.h>

#define MAX_PRODUTOS 50
#define TAM_NOME 30

int main(void)
{
    char nome[MAX_PRODUTOS][TAM_NOME];
    int quantidade[MAX_PRODUTOS];
    int minimo[MAX_PRODUTOS];
    float preco[MAX_PRODUTOS];

    int total = 0;          /* quantidade de produtos cadastrados */
    int opcao, cod, qtd, i;
    int totalUnidades, precisaRepor;
    float valorEstoque;

    printf("=== CONTROLE DE ESTOQUE ===\n");

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Cadastrar produto\n");
        printf("2. Listar estoque\n");
        printf("3. Registrar entrada\n");
        printf("4. Registrar saida\n");
        printf("5. Relatorio do estoque\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1: /* cadastrar produto */
                if (total == MAX_PRODUTOS) {
                    printf("Estoque cheio! Limite de %d produtos atingido.\n", MAX_PRODUTOS);
                    break;
                }

                printf("Nome do produto: ");
                scanf(" %29[^\n]", nome[total]);

                printf("Preco unitario: R$ ");
                scanf("%f", &preco[total]);
                while (preco[total] <= 0) {
                    printf("Preco invalido! Digite um valor maior que zero: R$ ");
                    scanf("%f", &preco[total]);
                }

                printf("Quantidade inicial em estoque: ");
                scanf("%d", &quantidade[total]);
                while (quantidade[total] < 0) {
                    printf("Quantidade invalida! Digite zero ou mais: ");
                    scanf("%d", &quantidade[total]);
                }

                printf("Estoque minimo: ");
                scanf("%d", &minimo[total]);
                while (minimo[total] < 0) {
                    printf("Valor invalido! Digite zero ou mais: ");
                    scanf("%d", &minimo[total]);
                }

                total++;
                printf("Produto cadastrado com o codigo %d.\n", total);
                break;

            case 2: /* listar estoque */
                if (total == 0) {
                    printf("Nenhum produto cadastrado.\n");
                    break;
                }
                printf("\nCOD  %-29s QTD   PRECO (R$)  VALOR (R$)  SITUACAO\n", "PRODUTO");
                for (i = 0; i < total; i++) {
                    printf("%-4d %-29s %-5d %-12.2f %-11.2f %s\n",
                           i + 1, nome[i], quantidade[i], preco[i],
                           quantidade[i] * preco[i],
                           (quantidade[i] <= minimo[i]) ? "REPOR" : "OK");
                }
                break;

            case 3: /* registrar entrada */
                if (total == 0) {
                    printf("Nenhum produto cadastrado.\n");
                    break;
                }
                printf("Codigo do produto (1 a %d): ", total);
                scanf("%d", &cod);
                if (cod < 1 || cod > total) {
                    printf("Codigo invalido!\n");
                    break;
                }
                printf("Quantidade que entrou: ");
                scanf("%d", &qtd);
                if (qtd <= 0) {
                    printf("Quantidade invalida! Deve ser maior que zero.\n");
                    break;
                }
                quantidade[cod - 1] += qtd;
                printf("Entrada registrada. Estoque de %s: %d unidade(s).\n",
                       nome[cod - 1], quantidade[cod - 1]);
                break;

            case 4: /* registrar saida */
                if (total == 0) {
                    printf("Nenhum produto cadastrado.\n");
                    break;
                }
                printf("Codigo do produto (1 a %d): ", total);
                scanf("%d", &cod);
                if (cod < 1 || cod > total) {
                    printf("Codigo invalido!\n");
                    break;
                }
                printf("Quantidade que saiu: ");
                scanf("%d", &qtd);
                if (qtd <= 0) {
                    printf("Quantidade invalida! Deve ser maior que zero.\n");
                } else if (qtd > quantidade[cod - 1]) {
                    printf("Estoque insuficiente! Disponivel: %d unidade(s).\n",
                           quantidade[cod - 1]);
                } else {
                    quantidade[cod - 1] -= qtd;
                    printf("Saida registrada. Estoque de %s: %d unidade(s).\n",
                           nome[cod - 1], quantidade[cod - 1]);
                    if (quantidade[cod - 1] <= minimo[cod - 1]) {
                        printf("ALERTA: %s atingiu o estoque minimo (%d). Repor!\n",
                               nome[cod - 1], minimo[cod - 1]);
                    }
                }
                break;

            case 5: /* relatorio */
                if (total == 0) {
                    printf("Nenhum produto cadastrado.\n");
                    break;
                }
                totalUnidades = 0;
                valorEstoque = 0.0f;
                precisaRepor = 0;
                for (i = 0; i < total; i++) {
                    totalUnidades += quantidade[i];
                    valorEstoque += quantidade[i] * preco[i];
                }

                printf("\n===== RELATORIO DO ESTOQUE =====\n");
                printf("Produtos cadastrados: %d\n", total);
                printf("Total de unidades em estoque: %d\n", totalUnidades);
                printf("Valor total do estoque: R$ %.2f\n", valorEstoque);
                printf("Produtos para repor:\n");
                for (i = 0; i < total; i++) {
                    if (quantidade[i] <= minimo[i]) {
                        printf("  - %s (estoque: %d | minimo: %d)\n",
                               nome[i], quantidade[i], minimo[i]);
                        precisaRepor++;
                    }
                }
                if (precisaRepor == 0) {
                    printf("  (nenhum)\n");
                }
                break;

            case 0:
                printf("Encerrando o sistema. Ate logo!\n");
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 0);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
