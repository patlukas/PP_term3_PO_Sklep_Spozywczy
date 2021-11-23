#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class MainProduct {
	float price;
	int numberOfProducts;
	string name;
	vector<MainProduct*> *listAllProducts;

protected:
	void updateMainData();
	void readMainData();

public:
	MainProduct() {};
	MainProduct(vector<MainProduct*>*, string);
	virtual void update() {};
	virtual void read() {};
	void deleteProduct();
	
};

