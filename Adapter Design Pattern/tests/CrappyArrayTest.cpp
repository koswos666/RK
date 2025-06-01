#include "CrappyArrayInventory.h"
#include <gtest/gtest.h>

TEST(CrappyArrayInventoryTest, BasicFunctionality) {
    CrappyArrayInventory inventory;
    Item* items = inventory.getInventory();
    
    // Проверяем, что инвентарь создан с 2 предметами
    EXPECT_EQ(inventory.getInventorySize(), 2);
    EXPECT_EQ(items[0].name, "Sword");
    EXPECT_EQ(items[1].value, 50);
}
