#include "Store.h"
#include "Order.h"
#include <iostream>

Store::Store(Item items[100]) {
        for(int i = 0; i < 100; i++) {
            _items[i] = items[i];
        }
    }
void Store::printInventory() const {
    std::cout << "Store: \n";
    for (int i = 0; i < 100; i++) {
        std::cout << _items[i].getName() << " x " << _items[i].getStock() << "\n";
    }
}

void Store::printStoreItem(const Item& item) {
    for (int i = 0; i < 100; i++) {
       if(const _items[i] == item) {
           std::cout << item.getName() << item.getId() << item.getPrice() << item.getStock();
       }
    }
}