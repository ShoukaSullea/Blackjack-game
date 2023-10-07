#include "Pack.h"
#include <random>


std::vector<Card> fillPack(std::vector<Card>& vec) {


	for (int i = 1; i < 5; i++) {
		for (int y = 1; y < 14; y++) {
			Card card(y, i);
			vec.push_back(card);
		}
	}
	return vec;
}

std::vector<Card> shufflePack(std::vector<Card>& vec) {
	std::random_device rd;
	std::mt19937 rng(rd());

	std::shuffle(vec.begin(), vec.end(), rng);
	return vec;
}

/*
std::vector<Card> DecksInitiate(std::vector<Card>& vec, std::vector<Card>& vec2, std::vector<Card>& vec3) {

}
*/