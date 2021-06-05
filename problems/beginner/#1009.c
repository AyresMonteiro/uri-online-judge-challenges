#include <stdio.h>
#include <stdlib.h>

void removeLineFeed(char * string) {
	for (int i = 0; string[i] != '\0'; i++) { 
		string[i] = string[i] == '\n' ? '\0' : string[i];
	}
}

char * readName () {
	char * name  = (char*) malloc(sizeof(char) * 1010);
	fgets(name, 1000, stdin);
	removeLineFeed(name);
	return name;
}

int main () {
	char * employeeName = readName();
	double fixedSalary, sales;
	
	scanf("%lf", &fixedSalary);
	scanf("%lf", &sales);

	printf("TOTAL = R$ %.2lf\n", fixedSalary + sales * 0.15);
	free(employeeName);	
	return 0;
}
