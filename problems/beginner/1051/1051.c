#include <stdio.h>

int main () {
    double wage, tax_rate, tax = 0.0;;

    scanf("%lf", &wage);

    if (wage <= 2000.0) {
        tax_rate = 0.0;
    } else if (wage <= 3000.0) {
        tax_rate = 8.0;
        wage -= 2000.0;
        tax += wage * (tax_rate/100.0);
    } else if (wage <= 4500.0) {
        tax_rate = 18.0;
        wage -= 3000.0;
        tax += 80.0 + (wage * (tax_rate/100.0));
    } else {
        tax_rate = 28.0;
        wage -= 4500.0;
        tax += 80.0 + 270.0 + (wage * (tax_rate/100.0));
    }

    if (tax_rate == 0.0) {
        printf("Isento\n");
    } else {
        printf("R$ %.2f\n", tax);
    }

    return 0;
}
