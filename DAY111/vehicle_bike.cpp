#include <iostream>

class Vehicle {
public:
    int wheels;
};

class Bike : public Vehicle {
public:
    Bike() { wheels = 2; }
    void print() { std::cout << "Bike wheels: " << wheels << "\n"; }
};

int main() {
    Bike b;
    b.print();
    return 0;
}
