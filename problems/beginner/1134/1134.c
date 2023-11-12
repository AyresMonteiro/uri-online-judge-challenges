#include <stdio.h>

int main () {
    volatile int product;
    int alcohol = 0, gasoline = 0, diesel = 0;

loop:
    scanf("%i", &product);

    switch (product){
        case 1:
            alcohol++;
            break;
        case 2:
            gasoline++;
            break;
        case 3:
            diesel++;
            break;
        case 4:
            goto summary;
        default:
            break;
    }
    
    goto loop;

summary:
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %i\n", alcohol);
    printf("Gasolina: %i\n", gasoline);
    printf("Diesel: %i\n", diesel);
    
    return 0;
}
