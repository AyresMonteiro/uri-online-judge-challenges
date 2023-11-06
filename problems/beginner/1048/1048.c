#include <stdio.h>



int main () {
    double wage, rate;

    scanf("%lf", &wage);

    if (wage <= 400.00) {
        rate = 15.0;
    } else if (wage <= 800.00) {
        rate = 12.0;
    } else if (wage <= 1200.00) {
        rate = 10.0;
    } else if (wage <= 2000.00) {
        rate = 7.0;
    } else {
        rate = 4.0;
    }

    double new_wage = wage * (1.0 + (rate / 100.0));

    printf("Novo salario: %.2f\n", new_wage);
    printf("Reajuste ganho: %.2f\n", new_wage - wage);
    printf("Em percentual: %.0f %%\n", rate);

    return 0;
}
