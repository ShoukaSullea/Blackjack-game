#pragma once
#include <vector>
#include "Cards.h"
#ifndef PACK_H
#define PACK_H


std::vector<card> fillPack(std::vector<card>& vec);
std::vector<card> shufflePack(std::vector<card>& vec);
std::vector<card> decksInitiate(std::vector<card>& vec, std::vector<card>& vec2, std::vector<card>& vec3);
int packValue(std::vector<card> vec);
std::vector<card> packHit(std::vector<card>& vec, std::vector<card>& vec2);
#endif 