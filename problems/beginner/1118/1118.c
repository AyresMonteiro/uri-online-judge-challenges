#include <stdio.h>

int main () {
    int count = 0, option, loops = 0;
    double tmpf, sumf = 0.0;

score_calc:
    while (count < 2) {
        scanf("%lf", &tmpf);

        if (tmpf >= 0.0 && tmpf <= 10.0) {
            sumf += tmpf;
            count++;
        } else printf("nota invalida\n");
    }

    printf("media = %.2f\n", sumf / (double) 2);

    do {
        printf("novo calculo (1-sim 2-nao)\n");

        scanf("%i", &option);
    } while (option != 1 && option != 2);

    if (option == 1) {
        count = 0;
        sumf = 0.0;
        goto score_calc;
    }

    return 0;
}
