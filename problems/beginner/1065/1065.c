#include <stdio.h>

int main () {
    int pares = 0, vetor[5];

    scanf(
        "%d%d%d%d%d",
        vetor,
        vetor + 1,
        vetor + 2,
        vetor + 3,
        vetor + 4
    );

    for (int i = 0; i < 5; i++) {
        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }

    printf("%d valores pares\n", pares);

    return 0;
}
