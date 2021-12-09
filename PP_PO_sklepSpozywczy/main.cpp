#include <iostream>
#include "ProductManagement.h"
#include "Manager.h"
#include <vector>

using namespace std;

int suma(Manager& obiekt) {
    int sum = 0;
    for (int i = 0; i < obiekt.vec.size(); i++) sum += obiekt.vec[i]->numberOfProducts;
    return sum;
}

int main() {
    setlocale(LC_ALL, "polish");
    vector<MainProduct*> list;
    Manager manager;
    cout << "Kliknij Enter...";
    manager.add(new ProductToEat(&list));
    cout << "Kliknij Enter...";
    manager.add(new ProductToDrink(&list));
    cout << "Kliknij Enter...";
    manager.add(new ProductToEat(&list));
    cout << suma(manager) << endl;
    system("pause");
    ProductManagement();
    return 0;
}
