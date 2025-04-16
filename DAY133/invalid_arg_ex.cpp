#include <iostream>
#include <stdexcept>

double sqrt_positive(double x) {
    if (x < 0) throw std::invalid_argument("Negative number not allowed");
    return x;
}

int main() {
    try {
        sqrt_positive(-4.0);
    } catch (const std::invalid_argument &e) {
        std::cout << "Invalid argument: " << e.what() << std::endl;
    }
    return 0;
}
