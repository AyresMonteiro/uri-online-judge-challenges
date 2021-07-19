#include <iostream>
#include <vector>

using namespace std;

int readNumber() {
	int number;

	cin >> number;

	return number;
}

void printArray(int arrayName, vector<int> array, int size) {
	const char * arrayNames[] = {
		"par",
		"impar",
	};

	for (int i = 0; i < size; i++) {
		printf("%s[%d] = %d\n", arrayNames[arrayName], i, array[i]);
	}
}


int main () {
	int bufferNumber;
	vector<int> par(5);
	vector<int> impar(5);
	int parController = 0, imparController = 0;

	// Note 1.
	// Because URI doesn't accept C99 in the C compiler, we need to declare
	// the loop variable before the loop.
	int i = 0;

	for (i; i < 15; i++) {
		bufferNumber = readNumber();

		if ((bufferNumber % 2) == 0) {
			par[parController] = bufferNumber;

			if (parController == 4) {
				printArray(0, par, 5);
				parController = -1;
			}

			parController++;
			continue;
		}

		impar[imparController] = bufferNumber;

		if (imparController == 4) {
			printArray(1, impar, 5);
			imparController = -1;
		}

		imparController++;
	}

	printArray(1, impar, imparController);
	printArray(0, par, parController);

	return 0;
}

