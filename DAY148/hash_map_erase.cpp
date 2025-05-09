#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> inv = {{"apple", 10}, {"orange", 5}};
    inv.erase("orange");
    std::cout << "Has orange? " << inv.count("orange") << std::endl;
    return 0;
}
