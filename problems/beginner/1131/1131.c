#include <stdio.h>

int main () {
    volatile int option, gols_inter, gols_gremio;
    int jogos_inter = 0, jogos_gremio = 0, empates = 0;

loop:
    scanf("%i%i", &gols_inter, &gols_gremio);

    if (gols_inter > gols_gremio) {
        jogos_inter++;
    } else if (gols_gremio > gols_inter) {
        jogos_gremio++;
    } else {
        empates++;
    }

    do {
        printf("Novo grenal (1-sim 2-nao)\n");

        scanf("%i", &option);
    } while (option != 1 && option != 2);

    if (option == 2) goto summary;

    goto loop;
summary:
    printf("%i grenais\n", jogos_inter + jogos_gremio + empates);
    printf("Inter:%i\n", jogos_inter);
    printf("Gremio:%i\n", jogos_gremio);
    printf("Empates:%i\n", empates);

    if (jogos_inter > jogos_gremio) {
        printf("Inter venceu mais\n");
    } else if (jogos_gremio > jogos_inter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Não houve vencedor\n");
    }

    return 0;
}
