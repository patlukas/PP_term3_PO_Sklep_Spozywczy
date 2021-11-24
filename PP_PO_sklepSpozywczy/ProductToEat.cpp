#include "ProductToEat.h"

ProductToEat::ProductToEat(vector<MainProduct*>* listAllProducts)
	: MainProduct{ listAllProducts, "Jedzenie" }
{
	cout << "\t Waga produktu w gramach: ";
	this->productWeight = this->cinIntValue();

	cout << "\t Czy produkt zawiera gluten (0-Nie, 1-Tak): ";
	this->containsGluten = this->cinBoolValue();
}

void ProductToEat::update() {
	this->updateMainData();

	string str;

	cout << "\t Waga produktu w gramach (" << this->productWeight << "): ";
	this->productWeight = this->cinIntValue(true, this->productWeight);

	cout << "\t Czy produkt zawiera gluten (0-Nie, 1-Tak) (" << this->containsGluten << "): ";
	this->containsGluten = this->cinBoolValue(true, this->containsGluten);
}

void ProductToEat::read() {
	this->readMainData();
	cout << "\tWaga: " << this->productWeight << "g" << endl;;

	if (this->containsGluten) cout << "\tProdukt zawiera gluten" << endl;
	else cout << "\tProdukt NIE zawiera glutenu" << endl;
}
