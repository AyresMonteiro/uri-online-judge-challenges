#include <stdio.h>
#include <stdlib.h>

int main () {
	int employeeNumber, employeeWorkedHours;
	double hourValue;

	scanf("%d", &employeeNumber);
	scanf("%d", &employeeWorkedHours);
	scanf("%lf", &hourValue);

	printf("NUMBER = %d\n", employeeNumber);
	printf("SALARY = U$ %.2lf\n", employeeWorkedHours * hourValue);
	return 0;
}

