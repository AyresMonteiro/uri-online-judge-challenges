#include <iostream>
#include <queue>
#include <vector>
#include <cstring>

#define DEFAULT_STRING_SIZE 30

using namespace std;

typedef struct soccerPlayer {
	int skill;
	char * name;
} soccerPlayer;

soccerPlayer readSoccerPlayerData () {
	soccerPlayer newSoccerPlayer;

	newSoccerPlayer.name = (char *) malloc(sizeof(char) * DEFAULT_STRING_SIZE);

	scanf("%s %d", newSoccerPlayer.name, &newSoccerPlayer.skill);

	return newSoccerPlayer;
}

void freeAllMemoryFromSoccerPlayers (soccerPlayer * players, int length) {
	for (int i = 0; i < length; i++) {
		free(players[i].name);
	}

	free(players);
}

int * readNumbers() {
	int * numbers = (int *) malloc(sizeof(int) * 2);
	
	scanf("%d %d", numbers, numbers + 1);

	return numbers;
}

int compareSoccerPlayersBySkill (const void * p1, const void * p2) {
	soccerPlayer player1 = *((soccerPlayer *) p1),
		player2 = *((soccerPlayer *) p2);

	return player2.skill - player1.skill;
}

int compareSoccerPlayersByName (const void * p1, const void * p2) {
	soccerPlayer player1 = *((soccerPlayer *) p1),
		player2 = *((soccerPlayer *) p2);

	return strcmp(player1.name,player2.name);
}
int main () {
	int * readedNumbers = readNumbers();

	int playersNumber = readedNumbers[0],
	    teamsNumber = readedNumbers[1];

	free(readedNumbers);

	soccerPlayer * players = (soccerPlayer *) malloc(sizeof(soccerPlayer) * playersNumber);

	for (int i = 0; i < playersNumber; i++) {
		players[i] = readSoccerPlayerData();
	}

	qsort(players, playersNumber, sizeof(soccerPlayer), compareSoccerPlayersBySkill);

	vector<vector<soccerPlayer>> teams;
	queue<soccerPlayer> playersStack;

	for (int i = 0; i < playersNumber; i++) {
		playersStack.push(players[i]);
	}

	for (int i = 0; i < teamsNumber; i++) {
		vector<soccerPlayer> newTeam;
		teams.push_back(newTeam);
	}

	while(!playersStack.empty()) {
		for (int i = 0; i < teamsNumber && !playersStack.empty(); i++) {
			teams[i].push_back(playersStack.front());
			playersStack.pop();
		}
	}

	for (int i = 0; i < teamsNumber; i++) {
		qsort(teams[i].data(), teams[i].size(), sizeof(soccerPlayer), compareSoccerPlayersByName);
	}
	

	for (int i = 0; i < teamsNumber; i++) {
		cout << "Time " << i + 1 << endl;

		for (int j = 0; j < teams[i].size(); j++) {
			cout << teams[i][j].name << endl;
		}

		cout << endl;
	}



	freeAllMemoryFromSoccerPlayers(players, playersNumber);
	return 0;
}

