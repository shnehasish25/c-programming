#include <iostream>

class Item {
    static int count;
public:
    Item() { count++; }
    static int get_count() { return count; }
};

int Item::count = 0;

int main() {
    Item a, b, c;
    std::cout << "Total items: " << Item::get_count() << std::endl;
    return 0;
}
