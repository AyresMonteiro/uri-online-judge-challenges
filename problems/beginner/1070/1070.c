#include <stdio.h>

int main () {
    int n, j = 0;

    scanf("%d", &n);

    while (j < 6) {
        if (n % 2 == 1) {
            printf("%d\n", n);
            j++;
        };
        n++;
    }

    return 0;
}
