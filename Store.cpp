#include "Store.h"
#include <iostream>

Store::Store(Item items[100]) {
        for(int i = 0; i < 100; i++) {
            _items[i] = items[i];
        }
    }
void Store::printInventory() {
    std::cout << "Store: \n";
    for (int i = 0; i < 100; i++) {
        std::cout << _items[i].getName() << " x " << _items[i].getStock() << "\n";
    }
}