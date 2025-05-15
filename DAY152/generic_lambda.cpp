#include <iostream>

int main() {
    auto print_any = [](auto x) {
        std::cout << "Item: " << x << std::endl;
    };
    print_any(42);
    print_any("Generic lambda in C++14");
    return 0;
}
