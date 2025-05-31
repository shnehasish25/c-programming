#include <iostream>
#include <unordered_map>
#include "item.h"

class Inventory {
    std::unordered_map<int, Item> items;
public:
    void add_item(const Item &item) { items[item.id] = item; }
    void print_stock() const {
        for (const auto &[id, it] : items) {
            std::cout << it.name << " ($" << it.price << ") Qty: " << it.stock << "\n";
        }
    }
};

int main() {
    Inventory inv;
    inv.add_item({1, "Mechanical Keyboard", 89.99, 15});
    inv.add_item({2, "Wireless Mouse", 49.99, 30});
    inv.print_stock();
    return 0;
}
