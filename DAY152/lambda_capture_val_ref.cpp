#include <iostream>

int main() {
    int factor = 5;
    auto mult = [factor](int x) { return x * factor; }; // capture by value
    std::cout << "mult(4): " << mult(4) << std::endl;

    int counter = 0;
    auto inc = [&counter]() { counter++; }; // capture by ref
    inc(); inc();
    std::cout << "Counter: " << counter << std::endl;
    return 0;
}
