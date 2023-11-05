#include <stdio.h>

int main () {
    int n_1, n_2, n_3, ordenado_1, ordenado_2, ordenado_3;

    scanf("%d%d%d", &n_1, &n_2, &n_3);

    if (n_1 > n_2 && n_1 > n_3) {
        ordenado_1 = n_1;

        if (n_2 > n_3) {
            ordenado_2 = n_2;
            ordenado_3 = n_3;
        } else {
            ordenado_2 = n_3;
            ordenado_3 = n_2;
        }
    } else if (n_2 > n_1 && n_2 > n_3) {
        ordenado_1 = n_2;

        if (n_1 > n_3) {
            ordenado_2 = n_1;
            ordenado_3 = n_3;
        } else {
            ordenado_2 = n_3;
            ordenado_3 = n_1;
        }
    } else {
        ordenado_1 = n_3;

        if (n_1 > n_2) {
            ordenado_2 = n_1;
            ordenado_3 = n_2;
        } else {
            ordenado_2 = n_2;
            ordenado_3 = n_1;
        }
    }

    printf("%d\n%d\n%d\n\n", ordenado_3, ordenado_2, ordenado_1);
    printf("%d\n%d\n%d\n", n_1, n_2, n_3);

    return 0;
}