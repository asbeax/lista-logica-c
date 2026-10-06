/* Exercicio 30 - Caixa eletronico (saldo inicial definido pelo programa) */
#include <stdio.h>

#define SALDO_INICIAL 1000.00f

int main(void)
{
    int opcao;
    float saldo = SALDO_INICIAL, valor;

    printf("Bem-vindo ao caixa eletronico!\n");
    printf("Saldo inicial da conta: R$ %.2f\n", saldo);

    do {
        printf("\n===== MENU =====\n");
        printf("1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;
            case 2:
                printf("Valor do deposito: R$ ");
                scanf("%f", &valor);
                if (valor > 0) {
                    saldo += valor;
                    printf("Deposito realizado! Novo saldo: R$ %.2f\n", saldo);
                } else {
                    printf("Valor invalido! O deposito deve ser maior que zero.\n");
                }
                break;
            case 3:
                printf("Valor do saque: R$ ");
                scanf("%f", &valor);
                if (valor <= 0) {
                    printf("Valor invalido! O saque deve ser maior que zero.\n");
                } else if (valor > saldo) {
                    printf("Saldo insuficiente! Saldo atual: R$ %.2f\n", saldo);
                } else {
                    saldo -= valor;
                    printf("Saque realizado! Novo saldo: R$ %.2f\n", saldo);
                }
                break;
            case 4:
                printf("Obrigado por utilizar o caixa eletronico. Ate logo!\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 4);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
