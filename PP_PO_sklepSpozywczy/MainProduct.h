#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class MainProduct {
	float price;
	string kindName;
	string name;
	vector<MainProduct*> *listAllProducts;

protected:
	void updateMainData();
	void readMainData();
	int cinIntValue(bool acceptEmpty = false, int defaultValue = 0);
	float cinFloatValue(bool acceptEmpty = false, float defaultValue = 0.0);
	string cinStringValue(bool acceptEmpty = false, string defaultValue = "");
	bool cinBoolValue(bool acceptEmpty = false, bool defaultValue = true);

public:
	MainProduct() {};
	MainProduct(vector<MainProduct*>*, string);
	int numberOfProducts;
	virtual void update() {};
	virtual void read() {};
	void deleteProduct();
	string getLabelProduct();
};

