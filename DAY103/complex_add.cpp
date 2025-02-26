#include <iostream>

class Complex {
public:
    double r, i;
    Complex(double r = 0, double i = 0) : r(r), i(i) {}

    Complex operator+(const Complex &other) const {
        return Complex(r + other.r, i + other.i);
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;
    std::cout << c3.r << " + " << c3.i << "i\n";
    return 0;
}
