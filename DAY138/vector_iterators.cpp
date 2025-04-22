#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> fruits = {"Apple", "Banana", "Cherry"};
    for (auto it = fruits.rbegin(); it != fruits.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}
