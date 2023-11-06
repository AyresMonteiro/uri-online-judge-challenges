#include <stdio.h>

void insertion_sort(double * numbers, int size) {
    for (int i = 1; i < size; i++) {
        double tmp = numbers[i];

        int j = i - 1;

        while (j > -1 && numbers[j] < tmp) {
            numbers[j + 1] = numbers[j];
            j--;
        }

        numbers[j + 1] = tmp;
    }
}

int main () {
    double numbers[3];

    scanf("%lf%lf%lf", numbers, numbers + 1, numbers + 2);

    insertion_sort(numbers, 3);

    if (numbers[0] < numbers[1] + numbers[2]) {
        double 
            a = numbers[0],
            a_2 = numbers[0] * numbers[0],
            b_2 = numbers[1] * numbers[1],
            c_2 = numbers[2] * numbers[2];
        if (a_2 == (b_2 + c_2)) {
            printf("TRIANGULO RETANGULO\n");
        } else if (a_2 > (b_2 + c_2)) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (numbers[0] == numbers[1] && numbers[0] == numbers[2]) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (
            (numbers[0] == numbers[1] && numbers[0] != numbers[2]) ||
            (numbers[1] == numbers[2] && numbers[1] != numbers[0]) ||
            (numbers[2] == numbers[0] && numbers[2] != numbers[1])
        ) {
            printf("TRIANGULO ISOSCELES\n");
        }
    } else {
        printf("NAO FORMA TRIANGULO\n");
    }

    return 0; 
}
