#include <iostream>

class Money {
    int cents;
public:
    Money(int c) : cents(c) {}
    bool operator==(const Money &o) const { return cents == o.cents; }
};

int main() {
    Money m1(100), m2(100);
    std::cout << "Equal cents: " << (m1 == m2) << std::endl;
    return 0;
}
