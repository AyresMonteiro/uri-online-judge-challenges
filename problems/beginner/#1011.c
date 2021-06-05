#include <stdio.h>
#include <math.h>

#define pi 3.14159

double readNumber() {
	double number;
	scanf("%lf", &number);
	return number;
}

int main () {
	printf("VOLUME = %.3lf\n", (4.0/3) * pi * pow(readNumber(), 3));
	return 0;
}

