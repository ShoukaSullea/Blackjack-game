#include "cards.h"

Card::Card(int inpValue, int inpSuit) : currentValue(static_cast<value>(inpValue - 1)), currentSuit(static_cast<suit>(inpSuit - 1)) {}