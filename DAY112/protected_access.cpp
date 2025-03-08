#include <iostream>

class Base {
protected:
    int protected_val = 42;
};

class Derived : public Base {
public:
    void display() {
        std::cout << "Protected value from base: " << protected_val << std::endl;
    }
};

int main() {
    Derived d;
    d.display();
    return 0;
}
