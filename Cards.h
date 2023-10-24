#pragma once
#ifndef CARDS_H
#define CARDS_H

#include <iostream>
#include <ctime>



class Card {
public:
	enum class suit  {
		hearts,
		diamonds,
		clubs,
		spades
	};

	enum class value {
		ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN,
		EIGHT, NINE, TEN, JACK, QUEEN, KING
		
	};
	
	std::string getSuit();
	std::string getRank();
	int getValue();
	int getState() { return this->isRevealed; };
	int flip() { return this->isRevealed = !isRevealed; };

	Card(int inpValue, int inpSuit);
private:
	value currentValue;
	suit currentSuit;
	bool isRevealed = true;
};

#endif	