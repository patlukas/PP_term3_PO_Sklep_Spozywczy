#include "ProductManagement.h"

ProductManagement::ProductManagement() {
	//this->list.push_back(new ProductToDrink(&this->list));
	this->showMenu();
}

void ProductManagement::showMenu() {
	this->clearConsol();
	cout << "Zarz¹dzanie baz¹ danych" << endl;
	cout << "\tWybierz czynnoœæ któr¹ chcesz wykonaæ" << endl;
	cout << "\t[1]\tPokazanie szczegó³owych danych produktu" << endl;
	cout << "\t[2]\tUsuniêcie produktu z bazy danych" << endl;
	cout << "\t[3]\tEdycja produktu z bazy danych" << endl;
	cout << "\t[4]\tDodanie nowego produktu" << endl;
	cout << "\t[0]\tZamkniêcie programu" << endl;

	string chooseOption;
	cin >> chooseOption;
	this->clearConsol();
	switch (stoi(chooseOption)) {
	case 1:
		this->showDetailsProduct();
		break;

	case 2:
		this->deleteProduct();
		break;

	case 3:
		this->updateProduct();
		break;

	case 4:
		this->createProduct();
		break;

	case 0:
		return;

	default:
		this->showMenu();
		
	}
}

void ProductManagement::showDetailsProduct() {
	this->showListProduct();
	cout << endl << "Wybierz indeks produktu, aby pokazaæ szczegó³owe dane, lub wpisz 0 aby wyjœæ do g³ównego menu: ";

	int option = this->getIndexChooseOption(this->list.size());
	if (option == 0) this->showMenu();
	else {
		cout << endl;
		this->list[option - 1]->read();
		cout << endl;
		this->clickKeyToGoToMainMenu();
	}
}

void ProductManagement::deleteProduct() {
	this->showListProduct();
	cout << endl << "Wybierz indeks produktu, który ma zostaæ usuniêty lub wpisz 0, aby wyjœæ do g³ównego menu: ";

	int option = this->getIndexChooseOption(this->list.size());
	if (option == 0) this->showMenu();
	else {
		this->list[option - 1]->deleteProduct();
		this->clickKeyToGoToMainMenu();
	}
}

void ProductManagement::updateProduct() {
	this->showListProduct();
	cout << endl << "Wybierz indeks produktu, którego dane maj¹ byæ zaaktualizowane lub wpisz 0, aby wyjœæ do g³ównego menu: ";

	int option = this->getIndexChooseOption(this->list.size());
	if (option == 0) this->showMenu();
	else {
		cout << endl;
		this->list[option - 1]->update();
		cout << endl;
		this->clickKeyToGoToMainMenu();
	}
}

void ProductManagement::createProduct() {
	cout << "[1] Produkt do jedzenia" << endl;
	cout << "[2] Produkt do picia" << endl;
	cout << endl << "Wybierz z jakiej kategorii chcesz dodaæ produkt od bazy, lub wybierz 0, aby wróciæ do menu g³ównego: ";

	int option = this->getIndexChooseOption(2);
	this->clearConsol();
	switch (option) {
	case 0:
		this->showMenu();
		return;
		break;
		
	case 1:
		this->list.push_back(new ProductToEat(&this->list));
		break;

	case 2:
		this->list.push_back(new ProductToDrink(&this->list));
	}
	this->clickKeyToGoToMainMenu();

}

void ProductManagement::showListProduct() {
	cout << "Lista produktów z bazy" << endl;
	for (int i = 0; i < this->list.size(); i++) {
		cout << "[" << i + 1 << "]\t" << list[i]->getLabelProduct() << endl;
	}
}

int ProductManagement::getIndexChooseOption(int maxIndex) {
	int option;
	do {
		cin >> option;
	} while (option < 0 || option > maxIndex);
	return option;
}

void ProductManagement::clearConsol() {
	system("cls");
}

void ProductManagement::clickKeyToGoToMainMenu() {
	system("pause");
	this->showMenu();
}