#include <iostream>

class Flyer {
public:
    void fly() { std::cout << "Flying in the air\n"; }
};

class Swimmer {
public:
    void swim() { std::cout << "Swimming in water\n"; }
};

class Duck : public Flyer, public Swimmer {};

int main() {
    Duck d;
    d.fly();
    d.swim();
    return 0;
}
