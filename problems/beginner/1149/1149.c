#include <stdio.h>

int summation (int x, int y) {
    x--;

    return (
        (y * (y + 1)) -
        (x * (x + 1))
    ) / 2;
}

int main () {
    int a, n;

    scanf("%i", &a);

    do {
        scanf("%i", &n);
    } while (n <= 0);

    printf("%i\n", summation(a, a - 1 + n));

    return 0;
}
