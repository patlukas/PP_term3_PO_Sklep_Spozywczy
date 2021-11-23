#include "ProductToEat.h"

ProductToEat::ProductToEat(vector<MainProduct*>* listAllProducts)
	: MainProduct{ listAllProducts, "Jedzenie" }
{
	cout << "\t Waga produktu: ";
	cin >> this->productWeight;
	cout << "\t Czy produkt zawiera gluten (0-Nie, 1-Tak): ";
	cin >> this->containsGluten;
}

void ProductToEat::update() {
	this->updateMainData();

	string str;

	cout << "\t Waga produktu: ";
	getline(cin, str);
	if (str != "") this->productWeight = stoi(str);

	cout << "\t Czy produkt zawiera gluten (0-Nie, 1-Tak): ";
	getline(cin, str);
	if (str != "") {
		if(str == "1") this->containsGluten = true;
		else if(str == "0") this->containsGluten = false;
	}
}

void ProductToEat::read() {
	this->readMainData();
	cout << "\tWaga: " << this->productWeight << " gram" << endl;;

	if (this->containsGluten) cout << "\tProdukt zawiera gluten" << endl;
	else cout << "\tProdukt NIE zawiera glutenu" << endl;
}
