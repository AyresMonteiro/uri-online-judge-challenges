#include <stdio.h>

int abs(int n) {
    return n < 0 ? ~(n - 1) : n;
}

int main () {
    int x, y, sum = 0;

    scanf("%d%d", &x, &y);

    if(x > y) {
        int tmp = y;
        y = x;
        x = tmp;
    }

    for (int i = x + 1; i < y; i++) {
        if (abs(i % 2) == 1) {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
