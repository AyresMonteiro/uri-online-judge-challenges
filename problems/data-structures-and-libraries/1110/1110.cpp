#include <iostream>
#include <vector>

using namespace std;

// Essa função gera um novo baralho
vector<int> generateDeck(int numberOfCards) {
	vector<int> newVector(numberOfCards, 1);

	for (int i = 0; i < numberOfCards; i++) {
		newVector[i] = i + 1;
	}

	return newVector;
}

// Realiza a operação de jogar carta fora descrita no exercício
int throwCard (vector<int> &vectorToManipulate, vector<int> &vectorOfDiscarded) {
	// Salvando carta descartada
	vectorOfDiscarded.push_back(*(vectorToManipulate.begin()));
	
	// Removendo carta de cima
	vectorToManipulate.erase(vectorToManipulate.begin());

	// Se houver apenas uma carta no baralho não há motivo fazer os pŕoximos
	// procedimentos.
	if (vectorToManipulate.size() == 1) return 0;

	// Adicionando carta ao final do baralho
	vectorToManipulate.push_back(*(vectorToManipulate.begin()));

	// Removendo duplicata no topo do baralho
	vectorToManipulate.erase(vectorToManipulate.begin());

	return 0;
}

// Cria um baralho e executa todos os procedimentos descritos no exercício.
int throwCards (int numberOfCards) {
	vector<int> discardedCards(0);
	vector<int> deck = generateDeck(numberOfCards);

	while (deck.size() > 1) {
		throwCard(deck, discardedCards);
	}

	cout << "Discarded cards: ";

	int i = 0;
	for (; i < discardedCards.size(); i++) {
		cout << discardedCards[i];
		
		// O último elemento não precisa de vírgula e espaçamento
		if (i < discardedCards.size() - 1) {
			cout << ", ";
		}
	}

	// Inserindo quebra de linha
	cout << endl;
	
	// Mostrando carta remanescente
	cout << "Remaining card: " << deck[0] << "\n";

	return 0;
}

int main () {
	while (true) {
		int numberOfCards = 0;

		// Lendo número de cartas da entrada padrão.
		cin >> numberOfCards;

		// Se o número de cartas no baralho for igual à 0, finalize
		// o programa.
		if (numberOfCards == 0) break;

		throwCards(numberOfCards);
	}

	return  0;
}

