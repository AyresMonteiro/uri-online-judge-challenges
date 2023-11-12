#include <stdio.h>

int main () {
    volatile int x, y;

    scanf("%i%i", &x, &y);

    if (x > y) {
        int tmp = x;
        x = y;
        y = tmp;
    }

    for (int i = x + 1; i < y; i++)
        if (i % 5 == 2 || i % 5 == 3)
            printf("%i\n", i);

    return 0;
}
