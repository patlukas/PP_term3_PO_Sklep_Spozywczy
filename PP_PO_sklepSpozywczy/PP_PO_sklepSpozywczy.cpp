#include <iostream>
#include "MainProduct.h"
#include "ProduktDoJedzenia.h"
#include <vector>

using namespace std;

int main() {
    vector<MainProduct*> list;
    cout << "Z " << &list << endl;
    list.push_back(new ProduktDoJedzenia(&list));
    list.push_back(new ProduktDoJedzenia(&list));
    list[0]->deleteProduct();
    cout << "Hello World!\n";
}
