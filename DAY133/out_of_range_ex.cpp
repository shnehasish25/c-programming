#include <iostream>
#include <vector>
#include <stdexcept>

int main() {
    std::vector<int> v = {1, 2, 3};
    try {
        std::cout << v.at(10) << std::endl; // throws out_of_range
    } catch (const std::out_of_range &e) {
        std::cout << "Out of range: " << e.what() << std::endl;
    }
    return 0;
}
