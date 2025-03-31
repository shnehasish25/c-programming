#include <iostream>

class Base { public: virtual ~Base() {} };
class Derived : public Base {};

int main() {
    Base b;
    Derived *d = dynamic_cast<Derived*>(&b);
    if (!d) std::cout << "Downcast safely rejected with nullptr\n";
    return 0;
}
