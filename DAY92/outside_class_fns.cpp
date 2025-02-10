#include <iostream>

class Calculator {
public:
    int multiply(int a, int b);
};

int Calculator::multiply(int a, int b) {
    return a * b;
}

int main() {
    Calculator calc;
    std::cout << "6 x 7 = " << calc.multiply(6, 7) << std::endl;
    return 0;
}
