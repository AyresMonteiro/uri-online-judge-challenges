#include <stdio.h>

int main () {
    float consumption_factor = 12;

    float hours, speed;

    scanf("%f", &hours);
    scanf("%f", &speed);

    float distance = hours * speed;

    printf("%.3f\n", distance / consumption_factor);

    return 0;
}
