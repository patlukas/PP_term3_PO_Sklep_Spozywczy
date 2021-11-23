#include "MainProduct.h"

MainProduct::MainProduct(vector<MainProduct*> *listAllProducts, string nameKindProduct) {
	this->listAllProducts = listAllProducts;
	cout << "Dodawanie produktu z kategorii \"" << nameKindProduct << "\"" << endl;
	cout << "\t Nazwa produktu: ";
	cin >> this->name;
	cout << "\t Cena produktu: ";
	cin >> this->price;
	cout << "\t Ile jest sztuk tego produktu: ";
	cin >> this->numberOfProducts;
}

void MainProduct::deleteProduct() {
	vector<MainProduct*> listAllProducts = *(this->listAllProducts);
	for (int i = 0; i < listAllProducts.size(); i++) {
		if (listAllProducts[i] == this) {
			listAllProducts.erase(listAllProducts.begin() + i);
			return;
		}
	}
}

void MainProduct::updateMainData() {
	cin.ignore();
	string str;

	cout << "Aktualizowanie danych produktu (kliknij tylko Enter aby zostawiæ poprzednie dane)"<< endl;

	cout << "\t Nazwa produktu: ";
	getline(cin, str);
	if (str != "") this->name = str;

	cout << "\t Cena produktu: ";
	getline(cin, str);
	if (str != "") this->price = stof(str);

	cout << "\t Ile jest sztuk tego produktu: ";
	getline(cin, str);
	if (str != "") this->numberOfProducts = stoi(str);
}

void MainProduct::readMainData() {
	cout << "Szczegó³owe informacje o \"" << this->name << "\"" << endl;
	cout << "\tCena produktu to " << this->price << " z³oty" << endl;
	cout << "\tW magazynie jest jeszcze " << this->numberOfProducts << " sztuk tego produktu"<<endl;
}