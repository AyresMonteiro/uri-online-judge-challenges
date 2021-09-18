#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int readNumber() {
	int i;

	cin >> i;

	return i;
}

string readLine() {
	string line;

	cin >> line;

	return line;
}

int isCounterpart(char actual, char top) {
	switch (top) {
		case '(':
			return actual == ')' ? 1 : 0;
			break;
		case '{':
			return actual == '}' ? 1 : 0;
			break;
		case '[':
			return actual == ']' ? 1 : 0;
			break;
	}

	return 0;
}


char isValidExpression(const char * expression, int length) {
	char isValid = 'S';

	const char * openCharacters = "({[";

	stack<char> syntax;

	for (int i = 0; i < length; i++) {
		if (strchr(openCharacters, expression[i])) {
			syntax.push(expression[i]);
			continue;
		}

		if (syntax.size() == 0) {
			syntax.push(expression[i]);
			break;
		}

		if (isCounterpart(expression[i], syntax.top())) {
			syntax.pop();
			continue;
		}

		break;
	}
	
	if(syntax.size() > 0) {
		isValid = 'N';
	}

	return isValid;
}


int main () {
	int numberOfExpressions = readNumber();

	string currentLine;

	for(int i = 0; i < numberOfExpressions; i++) {
		currentLine = readLine();
		printf("%c\n", isValidExpression(currentLine.data(), currentLine.size()));
	}

	return 0;
}

