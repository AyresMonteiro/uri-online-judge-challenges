#include <stdio.h>

int summation(int x, int y) {
    x--;

    return ((y * (y + 1)) - (x * (x + 1))) / 2;
}

int multiples_summation(int x, int y, int n) {
    int first_coefficient = x / n;
    int last_coefficient = y / n;

    if (first_coefficient * n < x) first_coefficient++;
    if (last_coefficient * n > y) last_coefficient--;

    return summation(first_coefficient, last_coefficient) * n;
}

int main () {
    int x, y;

    scanf("%d%d", &x, &y);

    if (x > y) {
        int tmp = y;
        y = x;
        x = tmp;
    }

    x++;
    y--;

    printf("%d\n", summation(x, y) - multiples_summation(x, y, 2));

    return 0;
}
