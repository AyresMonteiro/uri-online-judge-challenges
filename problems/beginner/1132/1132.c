#include <stdio.h>

int main () {
    int sum = 0;
    volatile int x, y;

    scanf("%i%i", &x, &y);

    if (x > y) {
        int tmp = x;
        x = y;
        y = tmp;
    }

    for (int i = x; i <= y; i++) if (i % 13 != 0) sum += i;

    printf("%i\n", sum);

    return 0; 
}
