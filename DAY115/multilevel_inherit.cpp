#include <iostream>

class Grandparent {
public:
    void legacy() { std::cout << "Grandparent legacy\n"; }
};

class Parent : public Grandparent {};
class Child : public Parent {};

int main() {
    Child c;
    c.legacy();
    return 0;
}
