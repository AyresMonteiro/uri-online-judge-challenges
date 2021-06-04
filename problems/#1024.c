#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void removeLineFeed (char* line) {
	for (int i = 0; line[i] != '\0'; i++) if(line[i] == '\n') line[i] = '\0';
}

char** readMessages(int numberOfLines) {
	char** stringArray = (char**) malloc(sizeof(char**)*numberOfLines);	

	for (int i = 0; i < numberOfLines; i++) {
		stringArray[i] = (char*) malloc(sizeof(char) * 1010);
		fgets(stringArray[i], 1000, stdin);
		removeLineFeed(stringArray[i]);
	}

	return stringArray;
}

void freeMessages (char** stringArray, int numberOfLines) {
	for (int i = 0; i < numberOfLines; i++) {
		free(stringArray[i]);
	}

	free(stringArray);
}

void encryptI(char* originalMessage) {
	for (int i = 0; originalMessage[i] != '\0'; i++) {
		if(islower(originalMessage[i]) || isupper(originalMessage[i])){
			originalMessage[i] += 3;
		}
	}
}

void encryptII(char* encryptedIMessage) {
	int messageLength = strlen(encryptedIMessage);
	int halfLength = messageLength / 2;	

	char aux;

	for (int i = 0; i < halfLength; i++) {
		aux = encryptedIMessage[i];
		encryptedIMessage[i] = encryptedIMessage[messageLength - i - 1];
		encryptedIMessage[messageLength - i - 1] = aux;
	}

	for (int i = halfLength; i < messageLength; i++) {
		encryptedIMessage[i]--;
	}
}

void fullEncrypt (char* message) {
	encryptI(message);
	encryptII(message);
	printf("%s\n", message);
}

int main () {
	int numberOfInputs;
	char** messagesArray;

	scanf("%d", &numberOfInputs);
	getchar();
	messagesArray = readMessages(numberOfInputs);

	for (int i = 0; i < numberOfInputs; i++) {
		fullEncrypt(messagesArray[i]);
	}

	freeMessages(messagesArray, numberOfInputs);
	return 0;
}


