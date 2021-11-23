#pragma once
#include "MainProduct.h";
#include <iostream>
#include <string>

using namespace std;

class ProductToEat : public MainProduct {
	int productWeight; //g
	bool containsGluten;

public:
	ProductToEat() {};
	ProductToEat(vector<MainProduct*>*);
	void update();
	void read();
};
