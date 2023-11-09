#include <stdio.h>

#define WEIGHT_1 2.0
#define WEIGHT_2 3.0
#define WEIGHT_3 5.0
#define WEIGHT_T 10.0

int main () {
    int n;
    double n_1, n_2, n_3;

    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        scanf("%lf%lf%lf", &n_1, &n_2, &n_3);

        double average = (
            n_1 * WEIGHT_1 +
            n_2 * WEIGHT_2 +
            n_3 * WEIGHT_3
        ) / WEIGHT_T;

        printf("%.1f\n", average);
    }

    return 0;
}
