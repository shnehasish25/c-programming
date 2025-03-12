#include <iostream>

int main() {
    std::cout << "Constructors run Base -> Derived.\n";
    std::cout << "Destructors run Derived -> Base.\n";
    return 0;
}
