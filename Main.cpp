#include <iostream>
#include "Deck.cpp"


int main() {
	
	std::vector<Card> Deck = createDeck();
	if (Deck[0].getSuit() == suit::hearts) { std::cout << "yooohoo"; };
	

}

