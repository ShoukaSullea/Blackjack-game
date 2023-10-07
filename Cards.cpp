#include "cards.h"

Card::Card(int inpValue, int inpSuit) :
	currentValue(static_cast<value>(inpValue)),
	currentSuit(static_cast<suit>(inpSuit)) {}

