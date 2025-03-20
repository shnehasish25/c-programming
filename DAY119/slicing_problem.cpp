#include <iostream>

class Base {
public:
    int b = 1;
};

class Derived : public Base {
public:
    int d = 2;
};

int main() {
    Derived dev;
    Base b = dev; // object slicing: d is sliced off!
    std::cout << "Base b: " << b.b << std::endl;
    return 0;
}
