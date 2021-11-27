#include <stdio.h>
#include <stdlib.h>

double* readNumbers () {
	double* n = (double*) malloc(sizeof(double)*2);
	scanf("%lf", n);
	scanf("%lf", n + 1);
	return n;
}

int main () {
	double* n = readNumbers();
	double media = (n[0] * 3.5 + n[1] * 7.5)/11;
	printf("MEDIA = %.5lf\n", media);
	free(n);
	return 0;
}

