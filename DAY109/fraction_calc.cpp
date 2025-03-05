#include <iostream>

class Frac {
public:
    int n, d;
    Frac(int n, int d) : n(n), d(d) {}
    Frac operator*(const Frac &o) const { return Frac(n * o.n, d * o.d); }
};

int main() {
    Frac a(2, 3), b(3, 4);
    Frac c = a * b;
    std::cout << c.n << "/" << c.d << std::endl;
    return 0;
}
