#include <stdio.h>

int main () {
    int n, x, y, sum = 0;

    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        scanf("%i%i", &x, &y);

        if (x > y) {
            int tmp = x;
            x = y;
            y = tmp;
        }

        for (int j = x + 1; j < y; j++) {
            if (j % 2 == 1) sum += j;
        }

        printf("%i\n", sum);

        sum = 0;
    }

    return 0;
}
