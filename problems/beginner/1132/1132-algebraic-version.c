#include <stdio.h>

int get_summation(int x, int y) {
    x--;

    return ((y * (y + 1)) - (x * (x + 1))) / 2;
}

int get_multiples_summation(int x, int y, int n) {
    int used_y = y / n;
    int used_x = x / n;

    if (used_x * n < x) used_x++;
    if (used_y * n > y) used_x--;

    return get_summation(used_x, used_y) * n;
}

int main () {
    int x, y;

    scanf("%i%i", &x, &y);

    if (x > y) {
        int tmp = x;
        x = y;
        y = tmp;
    }

    printf("%i\n", get_summation(x, y) - get_multiples_summation(x, y, 13));

    return 0;
}
