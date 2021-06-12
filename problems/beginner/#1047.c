#include <stdio.h>
#include <stdlib.h>

int * readNumbers () {
	int * n = (int *) malloc(sizeof(int) * 4);
	scanf("%d %d %d %d", n, n + 1, n + 2, n + 3);
	return n;
}

int howManyHours(int start, int final, int startMin, int finalMin) {
	int hours = final > start || (final == start && finalMin > startMin) ? final - start : 24 - (start - final);
	if(finalMin < startMin) hours--;
	return hours;
}

int howManyMinutes(int start, int final) {
	return final >= start ? final - start : 60 - (start - final);
}

int main () {
	int * time = readNumbers();
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", howManyHours(time[0], time[2], time[1], time[3]), howManyMinutes(time[1], time[3]));
	free(time);
	return 0;
}

