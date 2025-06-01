#ifndef CRAPPYARRAYINVENTORY_H
#define CRAPPYARRAYINVENTORY_H

#include "Item.h"  
class CrappyArrayInventory {
public:
    CrappyArrayInventory();
    Item* getInventory();
    int getInventorySize();
    
private:
    Item* items;
};

#endif // CRAPPYARRAYINVENTORY_H
