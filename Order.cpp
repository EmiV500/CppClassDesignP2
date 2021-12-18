#include "Order.h"
#include <iostream>

Order::Order(Item items[10]) {
        for(int i = 0; i < 100; i++) {
            _items[i] = items[i];
        }
    }
void Order::printPrice() {
    std::cout << "Total: $";
    int priceTotal = 0;
    for (int i = 0; i < 10; i++) {
        priceTotal += _items[i].getPrice();
    }
    std::cout << priceTotal;
}