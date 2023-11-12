#include <stdio.h>

int main () {
    int n;

    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        printf("%i %i %i PUM\n",
            (i * 4) + 1,
            (i * 4) + 2,
            (i * 4) + 3
        );
    }

    return 0;
}
