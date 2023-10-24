#include "pack.h"
#include "Game.h"


int main() {
	bool gameOn = true;
	int input;
	std::vector<Card> pack;
	std::vector<Card> playerHand;
	std::vector<Card> casinoHand;
	fillPack(pack);
	while (gameOn) {

		std::cout << system("cls") << "press 1 to play";
		std::cin >> input;
		if (input == 1) {
		

			gameScreen(pack, playerHand, casinoHand);
			evaluateScreen(pack, playerHand, casinoHand);
		}

	}
}

