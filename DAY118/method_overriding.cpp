#include <iostream>

class Parent {
public:
    void speak() { std::cout << "Parent speaking\n"; }
};

class Child : public Parent {
public:
    void speak() { std::cout << "Child speaking\n"; }
};

int main() {
    Child c;
    c.speak();
    c.Parent::speak();
    return 0;
}
