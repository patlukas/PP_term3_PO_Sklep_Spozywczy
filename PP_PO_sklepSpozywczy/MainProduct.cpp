#include "MainProduct.h"
#include "ProductToDrink.h"

MainProduct::MainProduct(vector<MainProduct*> *listAllProducts, string nameKindProduct) {
	cin.ignore();
	this->listAllProducts = listAllProducts;
	this->kindName = nameKindProduct;
	cout << "Dodawanie produktu z kategorii \"" << nameKindProduct << "\"" << endl;
	cout << "\t Nazwa produktu (bez polskich znaków): ";
	this->name = this->cinStringValue();
	cout << "\t Cena produktu: ";
	this->price = this->cinFloatValue();
	cout << "\t Ile jest sztuk tego produktu: ";
	this->numberOfProducts = this->cinIntValue();
}

void MainProduct::deleteProduct() {
	vector<MainProduct*> listAllProducts = *(this->listAllProducts);
	for (int i = 0; i < listAllProducts.size(); i++) {
		if (listAllProducts[i] == this) {
			this->listAllProducts->erase(this->listAllProducts->begin() + i);
			return;
		}
	}
}

void MainProduct::updateMainData() {
	cin.ignore();
	string str;

	cout << "Aktualizowanie danych produktu (kliknij tylko Enter aby zostawiæ poprzednie dane)"<< endl;

	cout << "\t Nazwa produktu (bez polskich znaków) ("<<this->name<<"): ";
	this->name = this->cinStringValue(true, this->name);

	cout << "\t Cena produktu (" << this->price << "): ";
	this->price = this->cinFloatValue(true, this->price);

	cout << "\t Ile jest sztuk tego produktu (" << this->numberOfProducts << "): ";
	this->numberOfProducts = this->cinIntValue(true, this->numberOfProducts);
}

void MainProduct::readMainData() {
	cout << "Szczegó³owe informacje o \"" << this->name << "\"" << endl;
	cout << "\tCena: " << this->price << "z³" << endl;
	cout << "\tDostêpnoœæ " << this->numberOfProducts << "szt"<<endl;
}

string MainProduct::getLabelProduct() {
	return this->name + " (" + this->kindName + ")";
}

int MainProduct::cinIntValue(bool acceptEmpty, int defaultValue) {
	string str;
	while (true) {
		getline(cin, str);
		if (str == "") {
			if (acceptEmpty) return defaultValue;
			else {
				cout << "\t\tNie mo¿na u¿yæ Entera, musisz podaæ liczbê ca³kowit¹ dodatni¹: ";
				continue;
			}
		}
		for (int i = 0; i < str.length(); i++) {
			if (isdigit(str[i]) == false) {
				cout << "\t\tWartoœæ musi byæ liczb¹ ca³kowit¹ dodatni¹: ";
				break;
			}
			else if (i + 1 == str.length()) return stoi(str);
		}
	}
}

float MainProduct::cinFloatValue(bool acceptEmpty, float defaultValue) {
	string str;
	while (true) {
		getline(cin, str);
		if (str == "") {
			if (acceptEmpty) return defaultValue;
			else {
				cout << "\t\tNie mo¿na u¿yæ Entera, musisz podaæ u³amek dziesiêtny dodatni: ";
				continue;
			}
		}
		bool dot = false;
		for (int i = 0; i < str.length(); i++) {
			if (isdigit(str[i]) == false) {
				if (str[i] == '.') str[i] = ',';
				if (str[i] == ',') {
					if (!dot and i > 0 and i < str.length()-1) {
						dot = true;
						continue;
					}
				}
				cout << "\t\tWartoœæ musi byæ u³amkiem dzisiêtnym dodatnim: ";
				break;
			}
			else if (i + 1 == str.length()) return stof(str);
		}
	}
}

string MainProduct::cinStringValue(bool acceptEmpty, string defaultValue) {
	string str;
	while (true) {
		getline(cin, str);
		if (str == "") {
			if (acceptEmpty) return defaultValue;
			else {
				cout << "\t\tNie mo¿na u¿yæ Entera, musisz podaæ ci¹g znaków: ";
				continue;
			}
		}
		return str;
	}
}

bool MainProduct::cinBoolValue(bool acceptEmpty, bool defaultValue) {
	string str;
	while (true) {
		getline(cin, str);
		if (str == "") {
			if (acceptEmpty) return defaultValue;
			else {
				cout << "\t\tNie mo¿na u¿yæ Entera, musisz podaæ \"1\" albo \"0\": ";
				continue;
			}
		}
		if (str == "1") return true;
		if (str == "0") return false;
		cout << "\t\tMuszisz wpisaæ \"1\" albo \"0\": ";
	}
}