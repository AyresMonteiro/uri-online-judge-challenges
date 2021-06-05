#include <stdio.h>
#include <stdlib.h>

int* readNumbers () {
	int* n = (int*) malloc(sizeof(int) * 4);
	for (int i = 0; i < 4; i++) scanf("%d", n + i);
	return n;
}

int main () {
	int* n = readNumbers();
	printf("DIFERENCA = %d\n", n[0] * n[1] - n[2] * n[3]);
	free(n);
	return 0;
}

