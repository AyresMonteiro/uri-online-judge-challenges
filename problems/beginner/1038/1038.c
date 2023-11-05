#include <stdio.h>

int main () {
    int pedido;
    double quantidade, valor;

    scanf("%d%lf", &pedido, &quantidade);

    switch (pedido) {
        case 1:
            valor = 4.0;
            break;
        case 2:
            valor = 4.5;
            break;
        case 3:
            valor = 5.0;
            break;
        case 4:
            valor = 2;
            break;
        default:
            valor = 1.5;
    }

    printf("Total: R$ %.2f\n", valor * quantidade);

    return 0;
}
