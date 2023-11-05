#include <stdio.h>

#define MES 30
#define ANO 365

int main () {
    int dias, meses = 0, anos = 0;

    scanf("%d", &dias);

    while (dias >= ANO) {
        dias -= ANO;
        anos++;
    }

    while (dias >= MES) {
        dias -= MES;
        meses++;
    }

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
