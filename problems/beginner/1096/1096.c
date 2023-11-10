#include <stdio.h>

int main () {
    for (int i = 1, j = 7; i < 10; j--) {
        printf("I=%i J=%i\n", i, j);

        if (j == 5) {
            j = 8;
            i += 2;
        }
    }

    return 0;
}
