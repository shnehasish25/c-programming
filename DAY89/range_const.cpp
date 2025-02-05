#include <iostream>
#include <string>

int main() {
    std::string words[] = {"one", "two", "three"};
    for (const auto &w : words) {
        std::cout << w << " ";
    }
    std::cout << std::endl;
    return 0;
}
