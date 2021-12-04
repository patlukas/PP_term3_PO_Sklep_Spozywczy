#pragma once
#include <vector>
#include "MainProduct.h"
#include "ProductToDrink.h"
#include "ProductToEat.h"

class ProductManagement
{
	vector<MainProduct*> list;
	void clearConsol();
	void clickKeyToGoToMainMenu();
	void showListProduct();
	int getIndexChooseOption(int);
	void deleteProduct();
	void updateProduct();
	void createProduct();
	void showMenu();
	void showDetailsProduct();

public:
	ProductManagement();
	
};

