#include "Pack.h"
#include "Game.h"

int menuScreen(bool &x) {
	int input;
	system("cls");
	std::cout << "Blackjack Game.\nPress 1. to start the game\nPress 2. to exit the game";

	std::cin >> input;

	switch (input) {
		case 1:
			
			break;
		case 2:
			return x = false;
		default:
			return x = true;
	}
}


std::vector<Card> gameScreen(std::vector<Card>& vec, std::vector<Card>& vec2, std::vector<Card>& vec3) {
	DecksInitiate(vec, vec2, vec3);
	int input;
	bool playing = true;
	while (PackValue(vec2) < 22 && playing == true) {
		system("cls");
		std::cout << "your hand:   ";
		for (int i = 0; i < vec2.size(); i++) {
			std::cout << vec2[i].getRank() << vec2[i].getSuit() << " ";
		}
		std::cout << "   value: " << PackValue(vec2) << "\n";
		std::cout << "casino hand: ?? " << vec3[1].getRank() << vec3[1].getSuit();
		
		std::cout << "   value: " << PackValue(vec3) << "\n";
		std::cout << "\n\npress 1. to hit \npress 2. to stand";
	
		std::cin >> input;
		switch (input) {
		case 1: packHit(vec, vec2); break;
		case 2: playing = false; break;
		}
	}
	return vec, vec2, vec3;
}
std::vector<Card> evaluateScreen(std::vector<Card>& vec, std::vector<Card>& vec2, std::vector<Card>& vec3) {
	system("cls");
	int input;
	int iteration = 1;
	vec3[0].flip();

	while (PackValue(vec3) < 17 && PackValue(vec3) < PackValue(vec2) && PackValue(vec2) < 22) {
		system("cls");
		if (iteration > 1) { packHit(vec, vec3); };
		std::cout << "your hand:   ";
		for (int i = 0; i < vec2.size(); i++) {
			std::cout << vec2[i].getRank() << vec2[i].getSuit() << " ";
		}
		std::cout << "   value: " << PackValue(vec2) << "\n";
		std::cout << "casino hand: ";
		for (int i = 0; i < vec3.size(); i++) {
			std::cout << vec3[i].getRank() << vec3[i].getSuit() << " ";
		}
		std::cout << "   value: " << PackValue(vec3) << "\n\nDealer's turn";
		std::cin >> input;
		iteration++;
	}

	system("cls");
	std::cout << "your hand:   ";
	for (int i = 0; i < vec2.size(); i++) {
		std::cout << vec2[i].getRank() << vec2[i].getSuit() << " ";
	};
	std::cout << "   value: " << PackValue(vec2) << "\n";
	std::cout << "casino hand: ";
	for (int i = 0; i < vec3.size(); i++) {
		std::cout << vec3[i].getRank() << vec3[i].getSuit() << " ";
	}
	std::cout << "   value: " << PackValue(vec3) << "\n";
	if (PackValue(vec2) > PackValue(vec3) && PackValue(vec2) <= 21 || PackValue(vec3) > 21) { std::cout  << "you win"; }
	else std::cout <<  "you lose";
	std::cin >> input;

	vec2.clear(), vec3.clear();
	return vec, vec2, vec3;
};



