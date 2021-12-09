#pragma once
#include <vector>
#include "MainProduct.h"

class Manager {
	friend int suma(Manager&);
private:
	vector<MainProduct*> vec;
public:
	void add(MainProduct*);

};


