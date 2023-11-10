#include <stdio.h>

int main () {
    for (int i = 0, j = 1, count = 0; i < 3; j++) {
        if (count == 0) {
            printf("I=%i J=%i\n", i, j);
        } else {
            printf("I=%i.%i J=%i.%i\n", i, count, j, count);
        }

        if (i == 2 && j == (3 + i)) {
            break;
        }

        if (j == (3 + i)) {
            count += 2;
            j = i;
        }

        if (count == 10) {
            i++;
            j = i;
            count = 0;
        }
    }

    return 0;
}
