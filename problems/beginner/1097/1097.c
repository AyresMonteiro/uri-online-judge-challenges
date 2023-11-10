#include <stdio.h>

int main () {
    for (int i = 1, j = 7, count = 0; i < 10; j--, count++) {
        printf("I=%i J=%i\n", i, j);

        if (count == 2) {
            j += 5;
            i += 2;
            count = -1;
        }
    }

    return 0;
}
