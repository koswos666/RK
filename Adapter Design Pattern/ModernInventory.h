#ifndef MODERNINVENTORY_H
#define MODERNINVENTORY_H

#include "Item.h"  
#include "CrappyArrayInventory.h"

class ModernInventory {
public:
    ModernInventory();
    Item* getItem(int index);
    const int getItemAmount() const;
    
protected:
    CrappyArrayInventory* pCrap;
};

#endif // MODERNINVENTORY_H
