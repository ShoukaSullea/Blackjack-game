#include "cards.h"


Card::Card(int inpValue, int inpSuit) :
	currentValue(static_cast<value>(inpValue)),
	currentSuit(static_cast<suit>(inpSuit)) {}

int Card::getValue() {
	switch (static_cast<int>(currentValue)) {
	case 0: 
		return 11;
	case 10: case 11: case 12:
		return 10; 

	

	default: return (static_cast<int>(currentValue)+1);
	}
}

std::string Card::getRank(){
	switch (currentValue) {
	case value::ACE: return "A"; break;
	case value::TWO: return "2"; break;
	case value::THREE: return "3"; break;
	case value::FOUR: return "4"; break;
	case value::FIVE: return "5"; break;
	case value::SIX: return "6"; break;
	case value::SEVEN: return "7"; break;
	case value::EIGHT: return "8"; break;
	case value::NINE: return "9"; break;
	case value::TEN: return "10"; break;
	case value::JACK: return "J"; break;
	case value::QUEEN: return "Q"; break;
	case value::KING: return "K"; break;
	
	}
};

std::string Card::getSuit() {
	switch (currentSuit) {
	case suit::clubs : return "C"; break;
	case suit::hearts: return "H"; break;
	case suit::spades: return "S"; break;
	case suit::diamonds: return "D";
	

	}
}