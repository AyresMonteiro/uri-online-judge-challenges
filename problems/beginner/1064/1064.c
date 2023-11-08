#include <stdio.h>

int main () {
    int positivos = 0;
    double vetor[6], soma = 0.0;

    scanf(
        "%lf%lf%lf%lf%lf%lf",
        vetor,
        vetor + 1,
        vetor + 2,
        vetor + 3,
        vetor + 4,
        vetor + 5
    );

    for (int i = 0; i < 6; i++) {
        if (vetor[i] >= 0.0) {
            positivos++;
            soma += vetor[i];
        }
    }

    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", soma / positivos);

    return 0;
}
