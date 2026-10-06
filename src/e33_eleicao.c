/* Exercicio 33 - Eleicao com tres candidatos (0 encerra a votacao) */
#include <stdio.h>

int main(void)
{
    int voto, v1 = 0, v2 = 0, v3 = 0, total, maior;

    printf("=== ELEICAO ===\n");
    do {
        printf("\nVote: 1 = Candidato 1 | 2 = Candidato 2 | 3 = Candidato 3 | 0 = encerrar\n");
        printf("Seu voto: ");
        scanf("%d", &voto);

        if (voto == 1) {
            v1++;
        } else if (voto == 2) {
            v2++;
        } else if (voto == 3) {
            v3++;
        } else if (voto != 0) {
            printf("Voto invalido!\n");
        }
    } while (voto != 0);

    total = v1 + v2 + v3;

    printf("\n===== RESULTADO =====\n");
    printf("Votos do candidato 1: %d\n", v1);
    printf("Votos do candidato 2: %d\n", v2);
    printf("Votos do candidato 3: %d\n", v3);
    printf("Total de votos: %d\n", total);

    if (total == 0) {
        printf("Nenhum voto foi registrado.\n");
    } else {
        maior = v1;
        if (v2 > maior) maior = v2;
        if (v3 > maior) maior = v3;

        if ((v1 == maior) + (v2 == maior) + (v3 == maior) > 1) {
            printf("Houve empate entre os candidatos:");
            if (v1 == maior) printf(" 1");
            if (v2 == maior) printf(" 2");
            if (v3 == maior) printf(" 3");
            printf("\n");
        } else if (v1 == maior) {
            printf("Candidato vencedor: Candidato 1\n");
        } else if (v2 == maior) {
            printf("Candidato vencedor: Candidato 2\n");
        } else {
            printf("Candidato vencedor: Candidato 3\n");
        }
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
