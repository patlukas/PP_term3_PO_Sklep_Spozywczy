#include "ProductToDrink.h"

ProductToDrink::ProductToDrink(vector<MainProduct*>* listAllProducts)
	: MainProduct{ listAllProducts, "Picie" }
{
	cout << "\t Pojemnoœæ butelki w mililitrach: ";
	this->bottleCapacity = this->cinIntValue();
	cout << "\t Czy butelka jest zwrotna (0-Nie, 1-Tak): ";
	this->returnableBottle = this->cinBoolValue();
}

void ProductToDrink::update() {
	this->updateMainData();

	string str;

	cout << "\t Pojemnoœæ butelki w mililitrach (" << this->bottleCapacity << "): ";
	this->bottleCapacity = this->cinIntValue(true, this->bottleCapacity);

	cout << "\t Czy butelka jest zwrotna (0-Nie, 1-Tak) (" << this->returnableBottle << "): ";
	this->returnableBottle = this->cinBoolValue(true, this->returnableBottle);
}

void ProductToDrink::read() {
	this->readMainData();
	cout << "\tPojemnoœæ: " << this->bottleCapacity << "ml" << endl;;

	if (this->returnableBottle) cout << "\tButelka jest zwrotna" << endl;
	else cout << "\tButelka NIE jest zwrotna" << endl;
}
