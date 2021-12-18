#include "Item.h"

Item::Item(std::string name, long id, double price, int stock) 
    : _name{ name }, _id{ id }, _price{ price }, _stock { stock } { }

std::string Item::getName() { return _name; }
long Item::getId() { return _id; }
double Item::getPrice() { return _price; }
int Item::getStock() { return _stock; }

