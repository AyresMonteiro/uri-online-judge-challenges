#include <stdio.h>

int main () {
    int n;

loop:
    scanf("%i", &n);

    if (n == 0) goto end;

    for (int i = 1; i <= n; i++) {
        printf("%i", i);

        if (i < n) putchar(' ');
    }

    putchar('\n');

    goto loop;
end:
    return 0;
}
