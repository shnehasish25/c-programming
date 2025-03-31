#include <iostream>
#include <typeinfo>

class Base { virtual void dummy() {} };
class Derived : public Base {};

int main() {
    Base *b = new Derived();
    std::cout << "Type: " << typeid(*b).name() << std::endl;
    delete b;
    return 0;
}
