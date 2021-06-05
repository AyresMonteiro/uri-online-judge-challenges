#include <stdio.h>
#include <stdlib.h>

double readAndCalculatePrice() {
	int productCode, productAmount;
	double unitPrice;

	scanf("%d %d %lf", &productCode, &productAmount, &unitPrice);
	return productAmount * unitPrice;
}

int main () {
	printf("VALOR A PAGAR: R$ %.2lf\n", readAndCalculatePrice() + readAndCalculatePrice());
	return 0;
}

