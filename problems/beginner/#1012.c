#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14159

double * readNumbers () {
	double * n = (double *) malloc(sizeof(double) * 3);
	scanf("%lf %lf %lf", n, n + 1, n + 2);
	return n;
}

void printTriangleArea (double base, double height) {
	printf("TRIANGULO: %.3lf\n", base * height / 2);
}

void printCircleArea (double radius) {
	printf("CIRCULO: %.3lf\n", pi * pow(radius, 2));
}

void printTrapeziumArea(double gBase, double sBase, double height) {
	printf("TRAPEZIO: %.3lf\n", (gBase + sBase)*height/2);
}

void printSquareArea(double side) {
	printf("QUADRADO: %.3lf\n", pow(side, 2));
}

void printRectangle(double sideA, double sideB) {
	printf("RETANGULO: %.3lf\n", sideA * sideB);
} 

int main () {
	double * numbers = readNumbers();
	printTriangleArea(numbers[0], numbers[2]);
	printCircleArea(numbers[2]);
	printTrapeziumArea(numbers[0], numbers[1], numbers[2]);
	printSquareArea(numbers[1]);
	printRectangle(numbers[0], numbers[1]);
	free(numbers);
	return 0;
}


