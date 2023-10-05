#include <iostream>
#include <queue>
#include "Cards.h"


int main() {
	
	std::vector<Card> Deck;
	int numberOfObjects = 3;
	for (int i = 0; i < numberOfObjects; ++i) {
		Deck.emplace_back(i);  
	}
	for (const Card& obj : Deck) {
		std::cout << "Value: " << obj.getValue() << std::endl;
	}
}
