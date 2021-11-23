#pragma once
#include "MainProduct.h";
#include <iostream>
#include <string>

using namespace std;

class ProduktDoJedzenia : public MainProduct {
	float productWeight; //g
	bool containsGluten;

public:
	ProduktDoJedzenia();
	ProduktDoJedzenia(vector<MainProduct*>*);
	void update();
};
