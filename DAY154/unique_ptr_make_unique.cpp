#include <iostream>
#include <memory>

int main() {
    auto ptr = std::make_unique<int>(1234);
    std::cout << "Value: " << *ptr << std::endl;
    return 0;
}
