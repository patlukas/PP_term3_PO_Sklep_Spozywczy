#pragma once
#include "MainProduct.h";
#include <iostream>
#include <string>

using namespace std;

class ProductToDrink : public MainProduct {
	int bottleCapacity; //ml
	bool returnableBottle;

public:
	ProductToDrink() {};
	ProductToDrink(vector<MainProduct*>*);
	void update();
	void read();
};
