#pragma once
#include <vector>
#include "Cards.h"
#ifndef PACK_H
#define PACK_H


std::vector<Card> fillPack(std::vector<Card>& vec);
std::vector<Card> shufflePack(std::vector<Card>& vec);
std::vector<Card> DecksInitiate(std::vector<Card>& vec, std::vector<Card>& vec2, std::vector<Card>& vec3);
int PackValue(std::vector<Card> vec);
std::vector<Card> packHit(std::vector<Card>& vec, std::vector<Card>& vec2);
#endif 