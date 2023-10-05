#pragma once
#ifndef CARDS_H
#define CARDS_H

#include <iostream>
#include <ctime>

enum class suit : unsigned char {
	hearts,
	diamonds,
	clubs,
	spades
};

enum class value : unsigned char {
	ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, ELEVEN, TWELVE, THIRTEEN
};

class Card {
public:
	suit getSuit() const { return this->currentSuit; };
	value getValue() const { return this->currentValue; };
	int getState() { return this->isRevealed; };
	int flip() { return this->isRevealed ^= true; };

	Card(int inpValue, int inpSuit);
private:
	value currentValue;
	suit currentSuit;
	bool isRevealed = false;
};

#endif	