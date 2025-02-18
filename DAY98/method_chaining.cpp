#include <iostream>

class Calc {
    int val = 0;
public:
    Calc& add(int x) { val += x; return *this; }
    Calc& mul(int x) { val *= x; return *this; }
    void print() { std::cout << "Result: " << val << std::endl; }
};

int main() {
    Calc c;
    c.add(5).mul(4).add(2).print(); // chaining with *this
    return 0;
}
