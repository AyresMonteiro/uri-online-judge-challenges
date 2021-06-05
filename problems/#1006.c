#include <stdio.h>
#include <stdlib.h>

double* readNumbers () {
	double* n = (double*) malloc(sizeof(double)*3);
	scanf("%lf", n);
	scanf("%lf", n + 1);
	scanf("%lf", n + 2);
	return n;
}

int main () {
	double* n = readNumbers();
	double media = (n[0] * 2 + n[1] * 3 + n[2] * 5)/10;
	printf("MEDIA = %.1lf\n", media);
	free(n);
	return 0;
}

