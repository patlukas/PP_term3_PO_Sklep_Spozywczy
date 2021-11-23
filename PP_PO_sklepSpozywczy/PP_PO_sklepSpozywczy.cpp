#include <iostream>
#include "MainProduct.h"
#include "ProductToEat.h"
#include "ProductToDrink.h"
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "polish");

    vector<MainProduct*> list;
    list.push_back(new ProductToDrink(&list));
    list.push_back(new ProductToEat(&list));
    list[0]->read();
    list[0]->update();
    list[0]->read();
    cout << "Hello World!\n";
}
