#include <stdio.h>
#include <stdlib.h>

int* readNumbers () {
	int* n = (int*) malloc(sizeof(int)*2);
	scanf("%d", n);
	scanf("%d", n + 1);
	return n;
}

int main () {
	int* n = readNumbers();
	printf("SOMA = %d\n", (n[0] + n[1]));
	free(n);
	return 0;
}

