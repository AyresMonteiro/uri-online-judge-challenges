#include <stdio.h>
#include <stdlib.h>

int * readNumbers() {
	int * n = (int*) malloc(sizeof(int) * 3);
	scanf("%d %d %d", n, n + 1, n + 2);
	return n;
}

int greatest (int a, int b) {
	return (a + b + abs(a - b))/2;
}

int main () {
	int * n = readNumbers();
	printf("%d eh o maior\n", greatest(greatest(n[0], n[1]), n[2]));
	free(n);
	return 0;
}

