#include <stdio.h>

int main () {
    int n, tmp, coelhos = 0, ratos = 0, sapos = 0, total;
    char c;

    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        scanf("%i %c", &tmp, &c);

        switch (c) {
            case 'C':
                coelhos += tmp;
                break;
            case 'R':
                ratos += tmp;
                break;
            case 'S':
                sapos += tmp;
                break;
        }
    }

    total = coelhos + ratos + sapos;

    printf("Total: %i cobaias\n", total);
    printf("Total de coelhos: %i\n", coelhos);
    printf("Total de ratos: %i\n", ratos);
    printf("Total de sapos: %i\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", ((double) coelhos * 100.0) / total);
    printf("Percentual de ratos: %.2f %%\n", ((double) ratos * 100.0) / total);
    printf("Percentual de sapos: %.2f %%\n", ((double) sapos * 100.0) / total);

    return 0;
}
