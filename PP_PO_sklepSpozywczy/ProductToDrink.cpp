#include "ProductToDrink.h"

ProductToDrink::ProductToDrink(vector<MainProduct*>* listAllProducts)
	: MainProduct{ listAllProducts, "Picie" }
{
	cout << "\t Pojemnoœæ butelki: ";
	cin >> this->bottleCapacity;
	cout << "\t Czy butelka jest zwrotna (0-Nie, 1-Tak): ";
	cin >> this->returnableBottle;
}

void ProductToDrink::update() {
	this->updateMainData();

	string str;

	cout << "\t Pojemnoœæ butelki: ";
	getline(cin, str);
	if (str != "") this->bottleCapacity = stoi(str);

	cout << "\t Czy butelka jest zwrotna (0-Nie, 1-Tak): ";
	getline(cin, str);
	if (str != "") {
		if (str == "1") this->returnableBottle = true;
		else if (str == "0") this->returnableBottle = false;
	}
}

void ProductToDrink::read() {
	this->readMainData();
	cout << "\tPojemnoœæ: " << this->bottleCapacity << "ml" << endl;;

	if (this->returnableBottle) cout << "\tButelka jest zwrotna" << endl;
	else cout << "\tButelka NIE jest zwrotna" << endl;
}
