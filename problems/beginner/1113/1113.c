#include <stdio.h>

int main () {
    int x, y;

    while(1) {
        scanf("%i%i", &x, &y);

        if (x > y) {
            printf("Decrescente\n");
        } else if (y > x) {
            printf("Crescente\n");
        } else break;
    }

    return 0;
}
