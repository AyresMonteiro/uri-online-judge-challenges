#include <stdio.h>

#define pi 3.14159

double areaOfCircle(double radius) {
	return pi * radius * radius;
}

int main () {
	double radius;
	scanf("%lf", &radius);
	printf("A=%.4lf\n", areaOfCircle(radius));
	return 0;
}


