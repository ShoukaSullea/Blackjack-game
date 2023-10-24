#include "Pack.h"
#include <random>


std::vector<Card> fillPack(std::vector<Card>& vec) {


	for (int i = 0; i < 4; i++) {
		for (int y = 0; y < 13; y++) {
			Card card(y, i);
			vec.push_back(card);
		}
	}
	shufflePack(vec);
	return vec;
}

std::vector<Card> shufflePack(std::vector<Card>& vec) {
	std::random_device rd;
	std::mt19937 rng(rd());

	std::shuffle(vec.begin(), vec.end(), rng);
	return vec;
}


std::vector<Card> DecksInitiate(std::vector<Card>& vec, std::vector<Card>& vec2, std::vector<Card>& vec3) {
	if (vec.size() < 4) { vec.clear(); fillPack(vec); };

	std::move_iterator<std::vector<Card>::iterator> moveBegin(vec.begin());
	std::move_iterator<std::vector<Card>::iterator> moveEnd(vec.begin() + 2);
	
	std::move(moveBegin, moveEnd, std::back_inserter(vec2));
	vec.erase(vec.begin(), vec.begin() + 2);
	std::move(moveBegin, moveEnd, std::back_inserter(vec3));
	vec.erase(vec.begin(), vec.begin() + 2);
	
	vec3[0].flip();
	return vec, vec2, vec3;
}

int PackValue(std::vector<Card> vec){
	int total = 0;
	int acesNum = 0;
	
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i].getState() == false) {}
		else {
			if (vec[i].getValue() == 11) {
				acesNum += 1;
			};
			total = total + vec[i].getValue();

		}
		if (total >= 22 && acesNum > 0) {
			total -= 10;
			acesNum -= 1;
		}
	}
	return total;
}

std::vector<Card> packHit(std::vector<Card>& vec, std::vector<Card>& vec2) {
	if (vec.size() < 1) { vec.clear(); fillPack(vec); };

	std::move_iterator<std::vector<Card>::iterator> moveBegin(vec.begin());
	std::move_iterator<std::vector<Card>::iterator> moveEnd(vec.begin() + 1);
	std::move(moveBegin, moveEnd, std::back_inserter(vec2));
	vec.erase(vec.begin(), vec.begin() + 1);
	
	return vec, vec2;
}
