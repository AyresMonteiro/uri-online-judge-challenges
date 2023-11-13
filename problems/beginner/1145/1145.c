#include <stdio.h>

int main () {
    int x, y;

    scanf("%i%i", &x, &y);

    for (int i = 1; i <= y; i += x) {
        for (int j = 0; j < x; j++) {
            printf("%i", i + j);

            if (i + j < i + x - 1) {
                putchar(' ');
            }
        }

        putchar('\n');
    }

    return 0;
}
