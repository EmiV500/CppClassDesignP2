#include "Item.h"
class Order {
    public:
        Order(Item items[10]);
        
        void printPrice();
    private:
        Item _items[10];
};