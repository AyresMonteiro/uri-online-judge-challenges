#include <stdio.h>

#define PESO_1 2
#define PESO_2 3
#define PESO_3 4
#define PESO_4 1

int main () {
    int exame = 0;
    double n_1, n_2, n_3, n_4;

    scanf("%lf%lf%lf%lf", &n_1, &n_2, &n_3, &n_4);

    double media = (
        n_1 * PESO_1 +
        n_2 * PESO_2 + 
        n_3 * PESO_3 + 
        n_4 * PESO_4   
    ) / (PESO_1 + PESO_2 + PESO_3 + PESO_4);

    printf("Media: %.1f\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        exame = 1;
    }

    if (exame) {
        double n_exame;
        
        scanf("%lf", &n_exame);

        printf("Nota do exame: %.1f\n", n_exame);

        double nova_media = (media + n_exame) / 2.0;

        if (nova_media >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", nova_media);
    }

    return 0;
}
