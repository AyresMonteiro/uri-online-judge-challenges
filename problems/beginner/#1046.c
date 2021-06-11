#include <stdio.h>
#include <stdlib.h>

int * readNumbers () {
	int * n = (int *) malloc(sizeof(int) * 2);
	scanf("%d %d", n, n + 1);
	return n;
}

int howManyHours(int start, int final) {
	return final > start ? final - start : 24 - (start - final);
}

int main () {
	int * hours = readNumbers();
	printf("O JOGO DUROU %d HORA(S)\n", howManyHours(hours[0], hours[1]));
	free(hours);
	return 0;
}

