#include <iostream>

class Base {
public:
    void foo(int x) { std::cout << "Base foo: " << x << "\n"; }
};

class Derived : public Base {
public:
    void foo(std::string s) { std::cout << "Derived foo: " << s << "\n"; }
};

int main() {
    Derived d;
    d.foo("hello");
    d.Base::foo(42);
    return 0;
}
