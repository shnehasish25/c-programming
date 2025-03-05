#include <iostream>

class Rational {
    int num, den;
public:
    Rational(int n = 0, int d = 1) : num(n), den(d) {}

    Rational operator+(const Rational &o) const {
        return Rational(num * o.den + o.num * den, den * o.den);
    }

    void print() const {
        std::cout << num << "/" << den << std::endl;
    }
};

int main() {
    Rational r1(1, 2), r2(1, 3);
    Rational r3 = r1 + r2;
    r3.print();
    return 0;
}
