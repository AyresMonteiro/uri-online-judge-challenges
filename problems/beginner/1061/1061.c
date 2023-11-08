#include <stdio.h>

#define DAY 86400
#define HOUR 3600
#define MINUTE 60

void get_n_characters(int n) {
    for (int i = 0; i < n; i++) {
        getchar();
    }
}

long int read_time() {
    long int n, total = 0;
    char _buffer[100];

    scanf("%s%ld", _buffer, &n);

    total += DAY * n;

    scanf("%ld", &n);

    total += HOUR * n;

    get_n_characters(3);

    scanf("%ld", &n);

    total += MINUTE * n;

    get_n_characters(3);

    scanf("%ld", &n);

    total += n;

    return total;
}

int main () {
    long int n, start = 0, end = 0;
   
    start = read_time();
    end = read_time();

    long int result = end - start;

    int days = result/DAY;
    result -= (long int) days * DAY;
    int hours = result/HOUR;
    result -= (long int) hours * HOUR;
    int minutes = result/MINUTE;
    result -= (long int) minutes * MINUTE;

    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", (int) result);

    return 0;
}
