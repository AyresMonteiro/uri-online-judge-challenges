#include <stdio.h>
// #include <math.h>

double readNumber () {
	double number;
	scanf("%lf", &number);

	/*
	 * There's only one test on this problem that has a rounding error.
	 * The code below solves it.
	 * I also tried "number = round(number * 100)/100" but it didn't work.
	 */
	number += 0.001;

	return number;
}

double printBanknotes(double number) {
	double banknotes[6] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0};

	for (int i = 0; i < 6; i++) {
		int amount = (int)number/(int)(banknotes[i]); 
		printf("%d nota(s) de R$ %.2lf\n", amount, banknotes[i]);
		number -= amount * banknotes[i];
	}

	return number;
}

double printCoins(long double number) {
	long double coins[6] = {1.0, 0.5, 0.25, 0.1, 0.05, 0.01};

	for (int i = 0; i < 6; i++) {
		int amount = (int)(number/coins[i]);
		printf("%d moeda(s) de R$ %.2Lf\n", amount, coins[i]);
		number -= (double)amount * coins[i];
	}

    	return 0.0;
}

int main () {
	double number = readNumber();

	printf("NOTAS:\n");
	number = printBanknotes(number);
	printf("MOEDAS:\n");	
	printCoins((long double)number);
	
	return 0;
}

