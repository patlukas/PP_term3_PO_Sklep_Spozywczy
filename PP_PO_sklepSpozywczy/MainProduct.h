#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class MainProduct {
public:
	//int idProduct;
	float price;
	int numberOfProducts;
	string name;
	vector<MainProduct*> *listAllProducts;

public:
	MainProduct();
	MainProduct(vector<MainProduct*>*, string);
	virtual void update() {};
	void deleteProduct();
	//~MainProduct() { ; };
	//void deleteProduct();
};

