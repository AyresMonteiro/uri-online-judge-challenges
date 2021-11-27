#include <stdio.h>
#include <stdlib.h>

double readNumber() {
	double n;
	scanf("%lf", &n);
	return n;
}

int determineInterval(double num) {
	if(num < 0.00 || num > 100.00) return 4;
	if(num == 25.0) return 0;
	if(num == 50.0) return 1;
	if(num == 75.0) return 2;
	if(num == 100.0) return 3;
	return (int) num/25.0;
}

void printInterval(double num) {
	const char * intervals[5] = {
		"Intervalo [0,25]",
		"Intervalo (25,50]",
		"Intervalo (50,75]",
		"Intervalo (75,100]",
		"Fora de intervalo"
	};

	printf("%s\n", intervals[determineInterval(num)]);
}

int main () {
	double number = readNumber();
	printInterval(number);
	return 0;
}

