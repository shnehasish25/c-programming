#include <iostream>

class LandVehicle {
public:
    void drive() { std::cout << "Driving on road\n"; }
};

class AirVehicle {
public:
    void take_off() { std::cout << "Taking off\n"; }
};

class FlyingCar : public LandVehicle, public AirVehicle {};

int main() {
    FlyingCar fc;
    fc.drive();
    fc.take_off();
    return 0;
}
