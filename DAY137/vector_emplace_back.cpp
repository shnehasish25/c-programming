#include <iostream>
#include <vector>

struct Item {
    int id;
    std::string tag;
    Item(int id, std::string tag) : id(id), tag(tag) {}
};

int main() {
    std::vector<Item> items;
    items.emplace_back(1, "Alpha"); // constructs in-place
    std::cout << items[0].tag << std::endl;
    return 0;
}
