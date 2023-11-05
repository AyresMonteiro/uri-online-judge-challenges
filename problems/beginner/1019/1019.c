#include <stdio.h>

#define MINUTE 60
#define HOUR 3600

int main () {
    int seconds, minutes = 0, hours = 0;

    scanf("%d", &seconds);

    while (seconds > HOUR) {
        seconds -= HOUR;
        hours++;
    }

    while (seconds > MINUTE) {
        seconds -= MINUTE;
        minutes++;
    }

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}

