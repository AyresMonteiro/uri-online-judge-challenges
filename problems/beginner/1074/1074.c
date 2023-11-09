#include <stdio.h>

 int abs(int n) {
    return n < 0 ? ~(n - 1) : n;
}

int main() {
    int n, tmp;

    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        scanf("%i", &tmp);

        if (abs(tmp % 2) == 1) printf("ODD ");
        else if (tmp != 0) printf("EVEN ");

        if (tmp > 0) printf("POSITIVE");
        else if (tmp < 0) printf("NEGATIVE");
        else printf("NULL");

        putchar('\n');
    }

    return 0;
}
