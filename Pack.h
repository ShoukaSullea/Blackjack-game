#pragma once
#include <vector>
#include "Cards.h"
#ifndef PACK_H
#define PACK_H


std::vector<Card> fillPack(std::vector<Card>& vec);
std::vector<Card> shufflePack(std::vector<Card>& vec);
std::vector<Card> pDeckInitiate(std::vector<Card>& vec);
std::vector<Card> hDeckInitiate(std::vector<Card>& vec);

#endif DECK_H