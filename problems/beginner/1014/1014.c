#include <stdio.h>
#include <stdlib.h>

typedef union {
	int intVar;
	double doubleVar;
} intOrDouble;

intOrDouble * readNumbers() {
	intOrDouble * n = (intOrDouble *) malloc(sizeof(intOrDouble) * 2);
	scanf("%d", &(n->intVar));
	scanf("%lf", &((n+1)->doubleVar));
	return n;
}

int main () {
	intOrDouble * numbers = readNumbers();
	printf("%.3lf km/l\n", numbers[0].intVar/numbers[1].doubleVar);
	free(numbers);
	return 0;
}


