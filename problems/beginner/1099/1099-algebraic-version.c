#include <stdio.h>

int summation(int x, int y) {
    return (
        (y * (y + 1)) -
        (x * (x - 1))
    ) / 2;
}

int multiples_summation(int x, int y, int n) {
    int first_coefficient = x / n;
    int last_coefficient = y / n;

    if (first_coefficient * n < x) first_coefficient++;
    if (last_coefficient * n > y) last_coefficient--;

    return summation(first_coefficient, last_coefficient) * n;
}

int odd_summation_between(int x, int y) {
    if (x == y) return 0;

    return summation(x + 1, y - 1) - multiples_summation(x + 1, y - 1, 2);
}

int main () {
    int n, x, y;

    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        scanf("%i%i", &x, &y);

        if (x > y) {
            int tmp = x;
            x = y;
            y = tmp;
        }

        printf("%i\n", odd_summation_between(x, y));
    }

    return 0;
}
