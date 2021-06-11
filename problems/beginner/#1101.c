#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool readNumbers(int * a, int * b) {
	scanf("%d %d", a, b);

	return *a > 0 && *b > 0;
}

void printSummation (int start, int end) {
	int summation = 0;

	for (int i = start; i <= end; i++) {
		printf("%d ", i);
		summation += i;
	}

	printf("Sum=%d\n", summation);
}

int main () {
	int a, b;
	bool canPrintSummation = readNumbers(&a, &b);
	
	while(canPrintSummation) {
		b > a ? printSummation(a, b) : printSummation(b, a);
		canPrintSummation = readNumbers(&a, &b);
	}

	return 0;
}

