#include "ProduktDoJedzenia.h"

ProduktDoJedzenia::ProduktDoJedzenia() { ; }

ProduktDoJedzenia::ProduktDoJedzenia(vector<MainProduct*> *listAllProducts) 
	: MainProduct{ listAllProducts, "Jedzenie" }
{
	cout << "\t Waga produktu: ";
	cin >> this->productWeight;
	cout << "\t Czy produkt zawiera gluten (0-Nie, 1-Tak): ";
	cin >> this->containsGluten;
}

void ProduktDoJedzenia::update() {
	cout << this->productWeight << endl;
}
