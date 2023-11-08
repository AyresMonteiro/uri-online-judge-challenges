#include <stdio.h>

int main () {
    int pares = 0, impares = 0, positivos = 0, negativos = 0, vetor[5];

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
        } else {
            impares++;
        }

        if (vetor[i] < 0) {
            negativos++;
        } else if (vetor[i] > 0) {
            positivos++;
        }
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}
