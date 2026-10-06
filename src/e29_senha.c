/* Exercicio 29 - Senha (senha correta: 1234) */
#include <stdio.h>

#define SENHA_CORRETA 1234

int main(void)
{
    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != SENHA_CORRETA) {
        printf("Senha incorreta. Tente novamente.\n");
        printf("Digite a senha: ");
        scanf("%d", &senha);
    }

    printf("Acesso autorizado.\n");

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
