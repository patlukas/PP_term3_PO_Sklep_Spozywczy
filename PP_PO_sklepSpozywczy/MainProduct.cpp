#include "MainProduct.h"

MainProduct::MainProduct() {}

MainProduct::MainProduct(vector<MainProduct*> *listAllProducts, string nameKindProduct) {
	this->listAllProducts = listAllProducts;
	cout << "L " << this->listAllProducts << endl;
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