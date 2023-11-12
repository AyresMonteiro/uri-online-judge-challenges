#include <stdio.h>

int main () {
    int n;
    double dividend, divisor;

    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        scanf("%lf%lf", &dividend, &divisor);

        if (divisor != 0.0) {
            printf("%.1f\n", dividend / divisor);
        } else {
            printf("divisao impossivel\n");
        }
    }

    return 0;
}
