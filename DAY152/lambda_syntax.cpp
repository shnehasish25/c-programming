#include <iostream>

int main() {
    auto greet = []() {
        std::cout << "Hello from C++ Lambda!" << std::endl;
    };
    greet();
    return 0;
}
