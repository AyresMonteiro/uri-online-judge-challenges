#include <stdio.h>

int main () {
    int count = 0;
    double tmp, sum = 0.0;

    while (count < 2) {
        scanf("%lf", &tmp);

        if (tmp >= 0.0 && tmp <= 10.0) {
            sum += tmp;
            count++;
        } else printf("nota invalida\n");
    }

    printf("media = %.2f\n", sum / 2.0);

    return 0;
}
