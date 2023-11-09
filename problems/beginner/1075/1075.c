#include <stdio.h>

int main () {
    int n;

    scanf("%i", &n);

    for (int i = 2; i < 10000; i++) {
        if (i % n == 2) {
            printf("%i\n", i);
        }
    }

    return 0;
}
