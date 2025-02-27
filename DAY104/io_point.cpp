#include <iostream>

class Fraction {
    int n, d;
public:
    Fraction(int n = 1, int d = 1) : n(n), d(d) {}
    friend std::ostream& operator<<(std::ostream &os, const Fraction &f) {
        return os << f.n << "/" << f.d;
    }
};

int main() {
    Fraction f(3, 4);
    std::cout << "Fraction: " << f << std::endl;
    return 0;
}
