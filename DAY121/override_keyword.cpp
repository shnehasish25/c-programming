#include <iostream>

class Base {
public:
    virtual void show() const { std::cout << "Base show\n"; }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void show() const override { std::cout << "Derived show\n"; }
};

int main() {
    Base *b = new Derived();
    b->show();
    delete b;
    return 0;
}
