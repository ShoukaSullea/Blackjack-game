#include "Pack.h"
#include "Game.h"


int main() {
	bool gameOn = true;
	int input;
	std::vector<card> pack;
	std::vector<card> playerHand;
	std::vector<card> casinoHand;
	fillPack(pack);

	while (gameOn) {
		system("cls");
		std::cout << "press 1 to play.\notherwise close the game";
		std::cin >> input;
		if (input == 1) {
			gameScreen(pack, playerHand, casinoHand);
			evaluateScreen(pack, playerHand, casinoHand);
		}
		else
			gameOn = false;

	}
	exit(0);
}

