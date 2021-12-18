#include "Item.h"
class Store {
    public:
        Store(Item items[100]);
        
        void printInventory();
    private:
        Item _items[100];
};