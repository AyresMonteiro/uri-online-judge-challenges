#include <stdio.h>
#include <math.h>

int main () {
    int x, z;

    scanf("%i", &x);

    do scanf("%i", &z); while (z <= x);

    // pn = x + (n - 1) * r
    // r = x + 1 - x = 1
    // pn = x + (n - 1)

    // sn = (p1 + pn) * n / 2
    // sn = (x + x + (n - 1)) * n / 2
    // sn = (2x + n - 1) * n / 2
    // sn = ((2x - 1) * n + n^2) / 2
    // 2 * sn = (2x - 1) * n + n^2
    // (2x - 1) * n + n^2 - 2 * sn = 0

    // a = 1
    // b = 2x - 1
    // c = - 2 * sn

    // delta = b^2 - 4 * a * c
    // delta = (2x - 1)^2 - 4 * 1 * (- 2 * sn)
    // delta = 4x^2 - 4x + 1 + 8 * sn

    int delta = 4 * x * x - 4 * x + 1 + 8 * z;

    // root_1 = (-b + sqrt(delta)) / (2 * a)
    // root_1 = (-(2x - 1) + sqrt(delta)) / (2 * 1)
    // root_1 = (-2x + 1 + sqrt(delta)) / 2
    // root_2 = (-2x + 1 - sqrt(delta)) / 2

    int root_1 = (-2 * x + 1 + sqrt(delta)) / 2;
    int root_2 = (-2 * x + 1 - sqrt(delta)) / 2;

    int picked = root_1 < 0 ? root_2 : root_1;

    printf("%i\n", ++picked);

    return 0;
}
