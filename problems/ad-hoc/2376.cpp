#include <iostream>

#define NUMBER_OF_INITIAL_GAMES 8;

using namespace std;

typedef struct game {
	char teamA, teamB, winner;
	int goalsA, goalsB;
} game;

int * readNumbers () {
	int * numbers = (int *) malloc(sizeof(int) * 2);

	scanf("%d %d", numbers, numbers + 1);

	return numbers;
}

int defineWinner (game * gameVar) {
	int * goals = readNumbers();

	gameVar->goalsA = goals[0];
	gameVar->goalsB = goals[1];

	free(goals);

	if (gameVar->goalsA > gameVar->goalsB) {
		gameVar->winner = gameVar->teamA;
		return 1;
	}

	if (gameVar->goalsA < gameVar->goalsB) {	
		gameVar->winner = gameVar->teamB;
		return -1;
	}

	return 0;	
}

game generateNewGameData (char teamA, char teamB) {
	game newGame;

	newGame.teamA = teamA;
	newGame.teamB = teamB;
	newGame.goalsA = 0;
	newGame.goalsB = 0;
	newGame.winner = '-';

	return newGame;
}

game * generateInitialGames (int numberOfGames) {
	char teamName = 'A';

	game * initialGames = (game *) malloc(sizeof(game) * numberOfGames);

	for (int i = 0; i < numberOfGames; i ++) {
		initialGames[i] = generateNewGameData(teamName, teamName + 1);
		teamName += 2;
	}

	return initialGames;
}

game * generateNextGames (game * previousGames, int numberOfGames) {
	int newGamesNumber = numberOfGames / 2;

	game * newGames = (game *) malloc(sizeof(game) * newGamesNumber);

	for (int i = 0; i < newGamesNumber; i++) {
		newGames[i] = generateNewGameData(previousGames[i * 2].winner, previousGames[(i * 2) + 1].winner);
	}

	return newGames;
}


int main() {
	int numberOfGames = NUMBER_OF_INITIAL_GAMES;
	int result = 1;
	bool canRun = true;
	game * games = generateInitialGames(numberOfGames);

	while(canRun && numberOfGames > 0) {
		for (int i = 0; i < numberOfGames; i++) {
			result = defineWinner(games + i);

			if (result == 0) {
				numberOfGames = 0;
				free(games);
				canRun = false;
				break;
			}
		}

		if (!canRun) continue;	

		if (numberOfGames == 1) {
			numberOfGames /= 2;
			continue;
		}

		game * newGames = generateNextGames(games, numberOfGames);
		free(games);
		games = newGames;

		numberOfGames /= 2;
	}

	if(canRun) {
		printf("%c\n", games[0].winner);

		free(games);
	}

	return 0;
}

