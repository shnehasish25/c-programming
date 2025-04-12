#include <iostream>

double safe_div(double a, double b) {
    if (b == 0) throw "Division by zero!";
    return a / b;
}

int main() {
    try {
        std::cout << safe_div(10, 2) << std::endl;
        std::cout << safe_div(5, 0) << std::endl;
    } catch (const char *msg) {
        std::cout << "Error: " << msg << std::endl;
    }
    return 0;
}
