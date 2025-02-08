#include <iostream>

class Car {
public:
    std::string model;
    int speed;

    void drive() {
        std::cout << model << " driving at " << speed << " km/h\n";
    }
};

int main() {
    Car c;
    c.model = "Tesla Model 3";
    c.speed = 110;
    c.drive();
    return 0;
}
