/* Exercicio 18 - Faixa etaria */
#include <stdio.h>

int main(void)
{
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    while (idade < 0) {
        printf("Idade invalida! Digite novamente: ");
        scanf("%d", &idade);
    }

    if (idade <= 12) {
        printf("Classificacao: Crianca\n");
    } else if (idade <= 17) {
        printf("Classificacao: Adolescente\n");
    } else if (idade <= 59) {
        printf("Classificacao: Adulto\n");
    } else {
        printf("Classificacao: Idoso\n");
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
