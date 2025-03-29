#include <iostream>

class Base {
public:
    Base() { std::cout << "Base constructed\n"; }
    virtual ~Base() { std::cout << "Base destroyed safely\n"; }
};

class Derived : public Base {
    int *data;
public:
    Derived() { data = new int[5]; std::cout << "Derived allocated\n"; }
    ~Derived() override { delete[] data; std::cout << "Derived freed\n"; }
};

int main() {
    Base *b = new Derived();
    delete b; // virtual destructor ensures Derived::~Derived is called!
    return 0;
}
