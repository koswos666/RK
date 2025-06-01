#include "ModernInventory.h"
#include <gtest/gtest.h>

TEST(ModernInventoryTest, AdapterWorks) {
    ModernInventory inventory;
    
    // Проверяем, что адаптер возвращает правильный предмет
    Item* item = inventory.getItem(0);
    ASSERT_NE(item, nullptr);
    EXPECT_EQ(item->name, "Sword");
}
