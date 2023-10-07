#include "Pack.h"
#include <utility>
#include <iterator>
#include <algorithm>
int main() {
	
	std::vector<Card> pack;
	std::vector<Card> playerHand;
	std::vector<Card> casinoHand;
	fillPack(pack);

	
	// move to function in pack.cpp
		std::move_iterator<std::vector<Card>::iterator> moveBegin(pack.begin());
		std::move_iterator<std::vector<Card>::iterator> moveEnd(pack.begin() + 2);
		std::move(moveBegin, moveEnd, std::back_inserter(playerHand));
		pack.erase(pack.begin(), pack.begin() + 2);


		std::cout << playerHand[0].getValue();
}
