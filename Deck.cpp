#include <queue>
#include "Cards.h"
#include <random>


std::vector<Card> createDeck() {
	std::vector<Card> Deck;

	for (int i = 0; i < 5; i++) {
		for (int y = 0; y < 13; i++) {
			Card card(i, y);
			Deck.push_back(card);
		}
	};
	return Deck;
}


void shuffleDeck(std::vector<Card>& vec) {
	std::random_device rd;
	std::mt19937 rng(rd());

	std::shuffle(vec.begin(), vec.end(), rng);
	
}