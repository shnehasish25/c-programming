#include <iostream>

class Parent {
public:
    int x = 100;
};

class Child : protected Parent {
public:
    int get_x() { return x; }
};

int main() {
    Child c;
    std::cout << "Child x: " << c.get_x() << std::endl;
    return 0;
}
