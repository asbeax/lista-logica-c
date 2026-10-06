/* Exercicio 8 - Salario bruto = horas trabalhadas x valor por hora */
#include <stdio.h>

int main(void)
{
    float horas, valorHora;

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Digite o valor recebido por hora: R$ ");
    scanf("%f", &valorHora);

    printf("\nSalario bruto: R$ %.2f\n", horas * valorHora);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
