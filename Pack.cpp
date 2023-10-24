#include "Pack.h"
#include <random>


std::vector<card> fillPack(std::vector<card>& vec) {


	for (int i = 0; i < 4; i++) {
		for (int y = 0; y < 13; y++) {
			card card(y, i);
			vec.push_back(card);
		}
	}
	shufflePack(vec);
	return vec;
}

std::vector<card> shufflePack(std::vector<card>& vec) {
	std::random_device rd;
	std::mt19937 rng(rd());

	std::shuffle(vec.begin(), vec.end(), rng);
	return vec;
}


std::vector<card> decksInitiate(std::vector<card>& vec, std::vector<card>& vec2, std::vector<card>& vec3) {
	if (vec.size() < 4) { vec.clear(); fillPack(vec); };

	std::move_iterator<std::vector<card>::iterator> moveBegin(vec.begin());
	std::move_iterator<std::vector<card>::iterator> moveEnd(vec.begin() + 2);
	
	std::move(moveBegin, moveEnd, std::back_inserter(vec2));
	vec.erase(vec.begin(), vec.begin() + 2);
	std::move(moveBegin, moveEnd, std::back_inserter(vec3));
	vec.erase(vec.begin(), vec.begin() + 2);
	
	vec3[0].flip();
	return vec, vec2, vec3;
}

int packValue(std::vector<card> vec){
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

std::vector<card> packHit(std::vector<card>& vec, std::vector<card>& vec2) {
	if (vec.size() < 1) { vec.clear(); fillPack(vec); };

	std::move_iterator<std::vector<card>::iterator> moveBegin(vec.begin());
	std::move_iterator<std::vector<card>::iterator> moveEnd(vec.begin() + 1);
	std::move(moveBegin, moveEnd, std::back_inserter(vec2));
	vec.erase(vec.begin(), vec.begin() + 1);
	
	return vec, vec2;
}
