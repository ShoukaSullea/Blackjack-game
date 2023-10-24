#include "Pack.h"
#include "Game.h"

std::vector<card> gameScreen(std::vector<card>& vec, std::vector<card>& vec2, std::vector<card>& vec3) {
	decksInitiate(vec, vec2, vec3);
	int input;
	bool playing = true;
	while (packValue(vec2) < 22 && playing == true) {
		system("cls");
		std::cout << "your hand:   ";
		for (int i = 0; i < vec2.size(); i++) {
			std::cout << vec2[i].getRank() << vec2[i].getSuit() << " ";
		}
		std::cout << "   value: " << packValue(vec2) << "\n";
		std::cout << "casino hand: ?? " << vec3[1].getRank() << vec3[1].getSuit();
		
		std::cout << "   value: " << packValue(vec3) << "\n";
		std::cout << "\n\npress 1. to hit \npress 2. to stand";
	
		std::cin >> input;
		switch (input) {
		case 1: packHit(vec, vec2); break;
		case 2: playing = false; break;
		}
	}
	return vec, vec2, vec3;
}
std::vector<card> evaluateScreen(std::vector<card>& vec, std::vector<card>& vec2, std::vector<card>& vec3) {
	system("cls");
	int input;
	int iteration = 1;
	vec3[0].flip();

	while (packValue(vec3) < 17 && packValue(vec3) < packValue(vec2) && packValue(vec2) < 22) {
		system("cls");
		if (iteration > 1) { packHit(vec, vec3); };
		std::cout << "your hand:   ";
		for (int i = 0; i < vec2.size(); i++) {
			std::cout << vec2[i].getRank() << vec2[i].getSuit() << " ";
		}
		std::cout << "   value: " << packValue(vec2) << "\n";
		std::cout << "casino hand: ";
		for (int i = 0; i < vec3.size(); i++) {
			std::cout << vec3[i].getRank() << vec3[i].getSuit() << " ";
		}
		std::cout << "   value: " << packValue(vec3) << "\n\nDealer's turn";
		std::cin >> input;
		iteration++;
	}

	system("cls");
	std::cout << "your hand:   ";
	for (int i = 0; i < vec2.size(); i++) {
		std::cout << vec2[i].getRank() << vec2[i].getSuit() << " ";
	};
	std::cout << "   value: " << packValue(vec2) << "\n";
	std::cout << "casino hand: ";
	for (int i = 0; i < vec3.size(); i++) {
		std::cout << vec3[i].getRank() << vec3[i].getSuit() << " ";
	}
	std::cout << "   value: " << packValue(vec3) << "\n";
	if (packValue(vec2) > packValue(vec3) && packValue(vec2) <= 21 || packValue(vec3) > 21) { std::cout  << "you win"; }
	else std::cout <<  "you lose";
	std::cin >> input;

	vec2.clear(), vec3.clear();
	return vec, vec2, vec3;
};



