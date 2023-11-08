#include <stdio.h>
#include <stdlib.h>

int * read_values(int n) {
    int * numbers = (int *) calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", numbers + i);
    }

    return numbers;
}


int main() {
    int n, in = 0, out = 0;

    scanf("%d", &n);

    int * numbers = read_values(n);

    for (int i = 0; i < n; i++) {
        if (numbers[i] >= 10 && numbers[i] <= 20) {
            in++;
        } else out++;
    }

    free(numbers);

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
